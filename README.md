# Contrast-sensitivity-test
本プログラムは、コントラスト感度を測定するための補助ツールです。
[こちらのリンク](https://github.com/Nemurino-kai/Contrast-sensitivity-test/releases/download/Initial/Contrast-sensitivity-test.exe)より、ダウンロードできます。

開発エンジン:Siv3d(August2016v2)<br>
使用エディタ:Visual Studio 2015

## 使用方法と諸注意
プログラムを立ち上げた状態で、マウスを左クリックするとコントラストが弱く、右クリックすると強くなります。
また、上キーを押すと縞の数が増え、下キーを押すと減少します。

空間周波数が表示されますが、これはウィンドウの大きさに対応する視角の大きさが3.951度の時の表示です。異なる状況では、ソースコードの該当部分の変更が必要です。

## プロジェクトをクローン・ビルドする際の注意
- サイズが大きい Siv3D の Engine フォルダを除外しています。必要な Engine フォルダは他の Siv3D プロジェクトからコピーしてください。
