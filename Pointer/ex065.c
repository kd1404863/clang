#include<stdio.h>
main()
{
	char* ptbl[4] = { "Programming2","Algorithm","Programming1","C" }, * pwork;
	int i, j;
	for (i = 0; i < 3; i++) {			//ラスト1回の処理は行わない
		for (j = i + 1; j < 4; j++) {
			if (strcmp(ptbl[i] ,ptbl[j])==1) {		//比較元と比較先。(元)より(先)の方が小さいとき＝＝1
				pwork = ptbl[i];			//入れ替え処理
				ptbl[i] = ptbl[j];
				ptbl[j] = pwork;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", ptbl[i]);
	}
}