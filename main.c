struct Book{
   int number;
   char title[10];
};

void main(void){
   int i;
   struct Book **bookshelf;
   
   bookshelf = (struct Book**)malloc(sizeof(struct Book*)); //����ü ������ ���� 3�� �Ҵ� 
   for(i=0; i<3; i++) //for�� 3�� �ݺ� 
   bookshelf[i] = (struct Book*)malloc(sizeof(struct Book*));   //����ü 10�� �Ҵ� 
   
   bookshelf[1][3].number = 5;  //�������迭ó����� 
   strcpy(bookshelf[1][3].title, "C++ Programming");
   
   (bookshelf[2]+4)->number = 3;
   strcpy((bookshelf[2]+4)->title, "Communications Theory");
   
   printf("book(1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
   printf("book(2,4) : %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
   
   for(i=0; i<3; i++)
   free(bookshelf[i]); //����ü ������ 3���� ���� ����Ű�� �ּ� ���� 
   
   free(bookshelf);  //����ü ���� �����Ͱ� ����Ű�� �ּ� ���� 
   return;
}
