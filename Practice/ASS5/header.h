enum category{
    PRIMARY,SECONDARY
};

struct  Student 
{
   int rollno;
   char name[20];
   float percentage;
   enum  category catg;
};

void accept(struct Student *S,int i);
void display(struct Student *s,int n);