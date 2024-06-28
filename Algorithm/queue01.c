#include<stdio.h>

#define SIZE 8			//スタックサイズ
int queue[SIZE];		//スタック領域用配列
int head = 0			//スタックポインタ（配列の添え字）
int tail = 0;

//関数プロトタイプ宣言
void display(void);		/*引数あり、戻り値なし*/
int enqueue(int d);		/*引数あり、戻り値あり*/
int dequeue(int* pd);	/*引数あり、戻り値あり*/

//メイン関数
main()
{
	int key, data, result;
	do {
		printf("\n\n◇エンキューはi、デキューはoを入力して＞");
		key = getchar();
		printf("\n");

		//プッシュ処理
		if (key == 'i') {
			printf("データ入力>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n※※※スタックが一杯です※※※\n");
			}
			else {
				display();
			}
		}

		//ポップ処理
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n※※※スタックが空です※※※\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}
//キュー表示関数
void display(void)
{
	int i;
	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < SIZE; i++) {
		printf("enqueue[%2d]は%5d", i, enqueue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)",head);		//確認用
		}
		if (i == tail) {
			printf("←tailが示している所（現在tailは%d)", tail);	//確認用
		}
		printf("\n");
	}
}
//キューにデータを入れる（エンキューする）関数
int enqueue(int d)
{
	if ((tail+1)%SIZE==head) { 
		return -1;					//スタックが一杯のとき
	}
	enqueue[tail] = d;
	tail++;
	return 0;
}
//キューからデータを取り出す（デキューする）関数
int pop(int* pd)
{
	if (head==tail) {
		return -1;					//キューが空のとき
	}
	*pd = queue[head];				//キューの先頭データを取り出す
	queue[head]=0;					//確認しやすいように
	head++;
	head = head % SIZE;
	return 0;
}