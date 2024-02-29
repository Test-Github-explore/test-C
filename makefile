# ターゲット名：ソースファイル
# [Tab] コマンド
hello: MEM30.c
	gcc -o hello MEM30.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
