
int myStrlen(char a[]) {
  int length=0,i;
  for(i=0;i<100;i++)
  {
    if((a[i]==' ')||(a[i]=='\0'))
      break;
    else
      length++;
  }
  return length;
}

int myStrcmp(char a[], char b[]){
  int number,i,aaa,bbb;
  for(i=0;i<100;i++)
  {
    if((a[i]==' ')||(b[i]==' ')||(a[i]=='\0')||(b[i]=='\0'))
      break;
    aaa=a[i]-'0';
    bbb=b[i]-'0';
    if(aaa!=bbb)
      {
        if(aaa<bbb)
         {
          number=-1;
          break;
          }
        else
         {
          number=1;
          break;
         }
      }
    else if((aaa==bbb)&&((a[i]==' ')||(b[i]==' ')||(a[i]=='\0')||(b[i]=='\0')))
     {
    number=0;
    break;
    }
  }
  return number;
}

void myStrcpy(char des[], char src[]){
  int i;
  for(i=0;i<100;i++)
    des[i]=0;
  for(i=0;i<100;i++)
  {
    if((src[i]!=' ')&&(src[i]!='\0'))
    {
      des[i]=src[i];
    }
    else
    break;
  }
}
