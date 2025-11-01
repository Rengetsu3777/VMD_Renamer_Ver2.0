#include "mainVmdRenamer.h"

#include <iostream>
#include <math.h>

#include "vmd.h"
#include "stringEdit.h"
#include "logger.h"


VMD vmd;
Logger *Logger::instance = nullptr;

std::tuple<int, std::string> mainVmdRenamer(const char* vmdPath, const char* csvPath, int transformScale) {

    //ログ関連初期化
    std::string logPath = getCodeFolderPath() + "/Log/.log";
    std::cout << "LogPath: " << logPath << std::endl;
    Logger::Init(logPath);
    int resultFlag = Logger::GetInstance()->GetErrorFlag();
    std::string resultDialog;

    std::tuple<int, std::string> result; //変換結果を状態番号と状態説明のログをセットにしている。


     // ログファイルを開けているか
    if(resultFlag) {
        resultDialog = Logger::GetInstance()->GetRunningDialog();
        result = std::make_tuple(resultFlag, resultDialog);
       return result;
    }

    //VMDクラス初期化
    auto vmd = VMD();

    //csvファイル読み込み
    resultFlag = vmd.InputBoneData(csvPath);
    //csvデータは正しいか？
    if(resultFlag) {
        resultDialog = Logger::GetInstance()->GetRunningDialog();
        result = std::make_tuple(resultFlag, resultDialog);
        return result;
    }

    int boneNumber = vmd.boneList.frameBoneList.size();

    //ログ（ボーン数）
    printf("Info: Bone Number in csv file: %d\n", boneNumber);
    printf("Info: csvファイル内の定義ボーン数: %d\n", boneNumber);
    Logger::GetInstance()->Info("Bone Number in csv file: %d\n", boneNumber);

    //vmdファイル情報読み込み
    resultFlag = vmd.ReadVMD(vmdPath);
    //vmdファイルは正しく開けているか判定
    if(resultFlag) {
        resultDialog = Logger::GetInstance()->GetRunningDialog();
        result = std::make_tuple(resultFlag, resultDialog);
        return result;
    }

    //モーションデータ書き換え
    vmd.RenameAndRescaleBone(transformScale);

    //モーションデータ出力
    vmd.SaveVMD(PATH_OUTPUT);

    //終了ログ
    printf("Info: Successfully End the process\n");
    printf("Info: 正常に処理を完了しました。\n");
    Logger::GetInstance()->Info("Successfully End the process (正常に処理を完了しました。）\n");
    Logger::GetInstance()->SetRunningDialog("正常に変換が完了しました");

    resultFlag = 0;
    resultDialog = Logger::GetInstance()->GetRunningDialog();
    result = std::make_tuple(resultFlag, resultDialog);
    return result;
}
