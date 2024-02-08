# ターゲット名：ソースファイル
# [Tab] コマンド
hello: hello.c
	gcc -o hello hello.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
