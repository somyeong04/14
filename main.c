struct Book{
   int number;
   char title[10];
};

void main(void){
   int i;
   struct Book **bookshelf;
   
   bookshelf = (struct Book**)malloc(sizeof(struct Book*)); //구조체 포인터 변수 3개 할당 
   for(i=0; i<3; i++) //for문 3번 반복 
   bookshelf[i] = (struct Book*)malloc(sizeof(struct Book*));   //구조체 10개 할당 
   
   bookshelf[1][3].number = 5;  //이차원배열처럼사용 
   strcpy(bookshelf[1][3].title, "C++ Programming");
   
   (bookshelf[2]+4)->number = 3;
   strcpy((bookshelf[2]+4)->title, "Communications Theory");
   
   printf("book(1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
   printf("book(2,4) : %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
   
   for(i=0; i<3; i++)
   free(bookshelf[i]); //구조체 포인터 3개가 각각 가리키는 주소 해제 
   
   free(bookshelf);  //구조체 이중 포인터가 가리키는 주소 해제 
   return;
}
