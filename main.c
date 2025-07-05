//
//  main.c
//  C Exersices
//
//  Created by Animesh on 28/05/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int mymult(int a,int b){  /* Exercise RS-9 */
    int c;
    c = a*b;
    return c;
}

void reverse(char t[])   /* K&R Exercise 1-17 */
{
    unsigned long l = strlen(t);
    char d[1000];
    int i;
    for(i=0;i<1000;i++){
        d[i] = t[l-i-1];
    }
    strcpy(t,d);
}

int htoi(const char *s)
{
    int j=0;
    int i;
    int v = (int)strlen(s);
    char t[v];
    for(i=0;i<v;++i){
        if(s[i] == '0'){
            t[i] = 0;
        }
        if(s[i] == '1'){
            t[i] = 1;
        }
        if(s[i] == '2'){
            t[i] = 2;
        }
        if(s[i] == '3'){
            t[i] = 3;
        }
        if(s[i] == '4'){
            t[i] = 4;
        }
        if(s[i] == '5'){
            t[i] = 5;
        }
        if(s[i] == '6'){
            t[i] = 6;
        }
        if(s[i] == '7'){
            t[i] = 7;
        }
        if(s[i] == '8'){
            t[i] = 8;
        }
        if(s[i] == '9'){
            t[i] = 9;
        }
        if(s[i] == 'a'){
            t[i] = 10;
        }
        if(s[i] == 'b'){
            t[i] = 11;
        }
        if(s[i] == 'c'){
            t[i] = 12;
        }
        if(s[i] == 'd'){
            t[i] = 13;
        }
        if(s[i] == 'e'){
            t[i] = 14;
        }
        if(s[i] == 'f'){
            t[i] = 15;
        }
        if(s[i] == 'A'){
            t[i] = 10;
        }
        if(s[i] == 'B'){
            t[i] = 11;
        }
        if(s[i] == 'C'){
            t[i] = 12;
        }
        if(s[i] == 'D'){
            t[i] = 13;
        }
        if(s[i] == 'E'){
            t[i] = 14;
        }
        if(s[i] == 'F'){
            t[i] = 15;
        }
    }
    int mult = 1;
    int m;
    for(m=v-1;m>=0;--m){
        j += (mult*t[m]);
        mult *= 16;
    }
    return j;
}

int lower(int c)
{
   char e = (int)c >= 65 && (int)c <= 91 ? (char)((int)c + 32) : c;
   return e;
}

void LBS290EX8(void){
       double c[5];
       double sum = 0.0;
       int i;
       for(i=0;i<5;++i){
           scanf("%lf",&c[i]);
       }
       for(i=0;i<5;++i){
           sum += c[i];
       }
       double n1 = (double)sizeof(c)/(double)sizeof(c[0]);
       double avg = sum/n1;
       printf("The total is: %.1lf\n",sum);
       printf("The average is: %.1lf\n",avg);
}

void _reverse(char* t)
{
    int i, j, len;
    char tmp;
    len = (int)strlen(t);
    for(i=0, j=len-1; ;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}


void itob(int n,char s[1000])
{
    int i = 0;
    while(n > 0) {
        s[i] = (n % 2) + '0';
        n = n / 2;
        i++;
    }
    s[i] = '\0';
    _reverse(s);
}
void itoh(int n1,char s[1000])
{
    int hex[10];
    int j=0;
    int k=0;
    while(n1!=0){
        hex[j] = n1 % 16;
        n1 = n1/16;
        j++;
    }
    hex[j] = '\0';
    for(k=(j-1);k>=0;k--){
        if(hex[k]==0){
            s[k] = '0';
        }
        if(hex[k]==1){
            s[k] = '1';
        }
        if(hex[k]==2){
            s[k] = '2';
        }
        if(hex[k]==3){
            s[k] = '3';
        }
        if(hex[k]==4){
            s[k] = '4';
        }
        if(hex[k]==5){
            s[k] = '5';
        }
        if(hex[k]==6){
            s[k] = '6';
        }
        if(hex[k]==7){
            s[k] = '7';
        }
        if(hex[k]==8){
            s[k] = '8';
        }
        if(hex[k]==9){
            s[k] = '9';
        }
        if(hex[k]==10){
            s[k] = 'a';
        }
        if(hex[k]==11){
            s[k] = 'b';
        }
        if(hex[k]==12){
            s[k] = 'c';
        }
        if(hex[k]==13){
            s[k] = 'd';
        }
        if(hex[k]==14){
            s[k] = 'e';
        }
        if(hex[k]==15){
            s[k] = 'f';
        }
    }
    s[k+3] = '\0';
    _reverse(s);
}

void LBS290EX16(void){
        char str[100];
        int ct1=0,ct2=0,ct3=0,ct4=0,ct5=0;
        int m,n,g;
        char op1,op2,op3,op4,op5,op6,op7;
        float v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0;
         for(g=0;g<100;++g){
            scanf("%c",&str[g]);
        }
        for(n=0;n<g;++n){
            sscanf(str,"%c %f %c %f %c %f %c %f %c %f %c %f %c %f",&op1,&v1,&op2,&v2,&op3,&v3,&op4,&v4,&op5,&v5,&op6,&v6,&op7,&v7);
        }
        for(m=0;m<100;++m){
            if(str[m]=='='){
                ct1+=1;
                if(ct1==1){
                    printf("Display: %.2f\n",v1);
                }
                else if(ct1==2){
                    printf("Display: %.2f\n",v3);
                }
            }
            else if(str[m]=='+'){
                ct2+=1;
                if(ct2==1){
                    printf("Display: %.2f\n",v4+v3);
                }
            }
            else if(str[m]=='*'){
                ct3+=1;
                if(ct3==1){
                    printf("Display: %.2f\n",v1*v2);
                }
                else if(ct3==2){
                    printf("Display: %.2f\n",((v4+v3)/v5)*v6);
                }
            }
            else if(str[m]=='-'){
                ct4+=1;
                if(ct4==1){
                    printf("Display: %.2f\n",(((v4+v3)/v5)*v6-v7));
                }
            }
            else if(str[m]=='/'){
                ct5+=1;
                if(ct5==1){
                    printf("Display: %.2f\n",(v4+v3)/v5);
                }
            }
        }
}

double faren(double celsius)
{
  double far = celsius*(double)9/5 + (double)32;
  return far;
}

int g = -1;
extern int g;
int bmp(void)
{
  ++g;
  return g;
}

static int c=-1;
void start(int m){
    if(m==c){
        c=-1;
    }
    else{
        c = m-1;
    }
}

int bump(void){
    ++c;
    return c;
}

void del_elem(int arr[],int m,unsigned long sz){
    for(unsigned long c = 0;c < sz;++c){
        if(c==m){
            for(unsigned long r = m;r<sz;++r){
                arr[r] = arr[r+1];
            }
        }
    }
    arr[sz-1] = '\0';
    for(unsigned long v = 0;v<sz-1;++v){
        printf("%d\n",arr[v]);
    }
}

void expand(const char *ch){
    char t[1000];
    int ct=0;
    int j;
    unsigned long f,r;
    unsigned long sz = strlen(ch);
    for(int u=0;u<1000;u++){
        t[u] = 0;
    }
    strcpy(t,ch);
    for(int u1=0;u1<1000;u1++){
        switch(t[u1]){
            case '\n':
                ct+=1;
                if(ct==1){
                    for(r=sz;r>=u1;--r){
                        t[r+1] = t[r];
                    }
                    t[u1] = '\\';
                    t[u1+1] = 'n';
                }
                else if(ct==2){
                    t[sz+2] = '\\';
                    t[sz+3] = 'n';
                }
                break;
        }
    }
    for(j=0;j<1000;++j){
        switch(t[j]){
            case '\t':
                for(f=sz;f>=j;--f){
                    t[f+1] = t[f];
                }
                t[j] = '\\';
                t[j+1] = 't';
                break;
        }
    }
    printf("%s\n",t);
}

void LBS290EX18(void){
    char ip[256];
    char memry[256];
    int j;
    for(j=0;j<256;++j){
        scanf("%c",&ip[j]);
        if(ip[j]=='\0'){
            break;
        }
    }
    printf("* Beginning\nMemory:\n");
    for(int m=0;m<j;++m){
        switch(ip[m]){
            case '=':
                memry[atoi(&ip[m-3])] = atoi(&ip[m+1]);
                break;
            case '+':
                memry[atoi(&ip[m-3])] = memry[atoi(&ip[m-3])] + atoi(&ip[m+1]);
                break;
            case '-':
                memry[atoi(&ip[m-3])] =  memry[atoi(&ip[m-3])] - atoi(&ip[m+1]);
                break;
        }
    }
    printf("%s\n",memry);
}

unsigned long series(int m){
    if(m<=0){
        return 0;
    }
    else{
        return (m)+series(m-1);
    }
}

void uniq(void){
    char ip[1000][1000] = {'\0'};
      int m = 0, n = 0;
      bool null_found=0;
    for(m = 0; m < 1000; ++m){
        null_found = 0;
        for (n = 0; n < 1000; ++n){
            scanf("%c", &ip[m][n]);
            if(ip[m][n] == '\n'){
                break;
            }
            if(ip[m][n] == '\0'){
                null_found = 1;
                break;
            }
        }
    }
    for(int j=0;j<100;++j){
        for(int i=0;i<100;++i){
            if(j == 0 || strcmp(ip[j], ip[j - 1]) != 0){
                printf("%s", ip[j]);
            }
            if(null_found==1){
                break;
            }
        }
    }
}

void calcpay(float *p,float *r,float *h){
    if(*h==45){
        *p = 190.00;
    }
    else{
        *p = (*r)*(*h);
    }
}

void concatestring(void){
    char s1[1000];
    char s2[1000];
    int ct = 0;
    int i;
    for(i=0;i<1000;++i){
        scanf("%c",&s1[i]);
        if(s1[i]=='\n'){
            break;
        }
    }
    scanf("%[^\n]%*c",s2);
    unsigned long re = strlen(s1);
    strcpy(&s1[re],s2);
    unsigned long re1 = strlen(s1);
    unsigned long r,t;
    for(r=0;r<1000;++r){
        if(s1[r]=='\n'){
            ct+=1;
            if(ct==1){
                for(t=re1;t>=r;--t){
                    s1[t+2] = s1[t];
                }
                s1[r] = ' ';
                s1[r+1] = '&';
                s1[r+2] = ' ';
            }
        }
        if(s1[r]=='\0'){
            break;
        }
    }
    printf("Enter two strings\n");
    printf("%s\n",s1);
}

void py_rstrip(void){
    char inp[1000];
    int ct = 0,fl=0;
    scanf("%[^\n]%*c",inp);
    unsigned long r = strlen(inp);
    unsigned long f,t;
    for(f=0;f<r;++f){
        if(inp[f]<=122 && inp[f]>=97){
            ct+=1;
        }
    }
    fl = ct;
    unsigned long ry = 0;
    ct = 0;
    for(f=0;f<r;++f){
        if(inp[f]<=122 && inp[f]>=97){
            ct+=1;
            if(ct==fl){
                ry = f;
            }
        }
    }
    for(t=ry+1;t<r;++t){
        inp[t] = '\0';
    }
    printf("-%s-\n",inp);
}

void ls_strip(void){
    char inp[1000];
    int ct = 0;
    unsigned long rt=0;
    scanf("%[^\n]%*c",inp);
    unsigned long r = strlen(inp);
    unsigned long f;
    for(f=0;f<r;++f){
        if(inp[f]<=90 && inp[f]>=65){
            ct+=1;
            if(ct==1){
                rt = f;
            }
        }
    }
    for(unsigned long t=0;t<r+1;++t){
        inp[t] = inp[t+rt];
    }
    printf("-%s-\n",inp);
}

void LBS290EX14(void){
    int inp[10];
    int ct =0;
    for(int i=0;i<10;++i){
        scanf("%d",&inp[i]);
    }
    for(int j=9;j>=0;--j){
        printf("numb[%d] = %d\n",j,inp[j]);
    }
    printf("\n");
    printf("Searching for entries equal to 100\n");
    printf("\n");
    for(int k=0;k<10;++k){
        if(inp[k]==100){
            ct+=1;
            printf("Found 100 at %d\n",k);
        }
    }
    printf("\n");
    printf("Found %d entries with 100\n",ct);
}

void LBS290EX15(char inp[1000]){
    unsigned long er = strlen(inp);
    printf("String: %s\n",inp);
    printf("Count=%lu\n",er);
    for(int d=0;d<er-1;++d){
        if(d==9){
            printf("The ninth character is: %c\n",inp[d]);
        }
        if(inp[d]==' '){
            inp[d] = '-';
        }
    }
    printf("String: %s\n",inp);
    printf("\n");
}

void LBS290EX17(void){
    char de[256];
    char mem[256];
    int h;
    int ct1=0,ct2=0;
    for(h=0;h<256;++h){
        scanf("%c",&de[h]);
        if(de[h]==60){
            ct1+=1;
        }
        if(de[h]=='\0'){
            break;
        }
    }
    int r=0,i,e;
    for(e=0;e<h;++e){
        switch(de[e]){
            case 62:
                ct2+=1;
                mem[atoi(&de[0])+ct2] = atoi(&de[e+1]);
                break;
            case 60:
                r = ((atoi(&de[0])+ct2)-ct1);
                mem[r] = atoi(&de[e+1]);
                break;
        }
    }
    printf("Memory:\n");
    for(i=atoi(&de[0]);i<256;++i){
        printf("%c",mem[i]);
        if(mem[i]=='\0'){
            break;
        }
    }
    printf("\n");
}

struct simpledate {
    int day;
    int month;
    int year;
};

void dump_date(struct simpledate *pd)
{
    if(pd->month < 10){
        printf("%d/0%d/%d\n",pd->year,pd->month,pd->day);
    }
    else{
        printf("%d/%d/%d\n",pd->year,pd->month,pd->day);
    }
}

int day_of_year(struct simpledate *pd){
    int j=0;
    
    return j;
}

struct lnode{
   int value;
   struct lnode *next;
};

struct list{
 struct lnode *head;
 struct lnode *tail;
};

void list_add(struct list *lst,int value)
{
    struct lnode *new_node = malloc(sizeof(struct lnode));
    if(!new_node){
        return;
    }
    new_node->value = value;
    new_node->next = NULL;
    if(lst->tail)
    {
        lst->tail->next = new_node;
        if(lst->head->next == NULL){
            lst->head->next = lst->tail->next;
        }
    }
    else
    {
        lst->head = new_node;
    }
    lst->tail = new_node;
}

void list_dump(struct list *lst)
{
    struct lnode *cur;
    printf("Dump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next){
        printf("  %d\n",cur->value);
    }
}

void list_remove(struct list *lst,int value){
    struct lnode *cur;
    for(cur=lst->head;cur != NULL;cur=cur->next){
        if(cur->value == value && cur->value == lst->tail->value){
            lst->head->next = NULL;
        }
        else if(cur->value == value){
            lst->head = cur->next;
        }
    }
    free(cur);
    return;
}

struct lnode *list_find(struct list *lst,int value){
    struct lnode *cur;
    for(cur=lst->head;cur != NULL; cur=cur->next){
        if(cur->value==value){
            return cur;
        }
    }
    return NULL;
}

struct pystr
{
    int length;
    int alloc;
    char *data;
};

struct pystr *pystr_new(void){
    struct pystr *p = malloc(sizeof(*p));
    p->length = 0;
    p->alloc = 10;
    p->data = malloc(10);
    p->data[0] = '\0';
    return p;
}

void pystr_del(const struct pystr* self){
    free((void *)self->data);
    free((void *)self);
}

void pystr_dump(const struct pystr* self)
{
    printf("Pystr length=%d alloc=%d data=%s\n",self->length, self->alloc, self->data);
}

int pystr_len(const struct pystr* self)
{
    return self->length;
}

char *pystr_str(const struct pystr* self)
{
    return self->data;
}

void pystr_append(struct pystr *self, char ch){
    int c = 0;
    for(int i=0;self->data[i]<10;++i){
        self->data[i] = ch;
        c+=1;
        if(self->data[i]!='\0'){
            break;
        }
    }
    self->length = c;
}

void pystr_appends(struct pystr *self,char *str){
    unsigned long r = strlen(str);
    printf("%lu\n",r);
    self->data = realloc(self->data,r);
    self->alloc = 20;
    strcpy(&self->data[1],str);
    self->length = 11;
}

void pystr_assign(struct pystr *self,char *str){
    unsigned long d = strlen(str);
    strcpy(self->data,str);
    self->length = (int)d;
}

struct listnode{
    char *text;
    struct listnode *next;
};

struct pylist{
  struct listnode *head;
  struct listnode *tail;
  int count;
};

struct pylist *pylist_new(void){
    struct pylist *p = malloc(sizeof(*p));
    p->head = NULL;
    p->tail = NULL;
    p->count = 0;
    return p;
}

void pylist_del(struct pylist* self){
    struct listnode *cur;
    struct listnode *next;
    cur = self->head;
    while(cur){
        free(cur->text);
        next = cur->next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

void pylist_append(struct pylist *self,char *str){
    struct listnode *new_node = malloc(sizeof(struct listnode));
    if(!new_node){
        return;
    }
    new_node->text = strdup(str);
    new_node->next = NULL;
    if(self->tail)
    {
        self->tail->next = new_node;
        if(self->head->next == NULL){
            self->head->next = self->tail->next;
        }
    }
    else
    {
        self->head = new_node;
    }
    self->tail = new_node;
}

void pylist_print(struct pylist *self){
    struct listnode *ln;
    int c = 0,ct=0,v;
    for(ln=self->head;ln != NULL;ln=ln->next){
        c+=1;
    }
    v = c;
    printf("[");
    for(ln=self->head;ln != NULL;ln=ln->next){
        ct+=1;
        printf("'%s'",ln->text);
        if(ct>=1 && ct<v){
            printf(",");
        }
    }
    printf("]");
    printf("\n");
}

int pylist_len(struct pylist *self){
    struct listnode *l;
    int c=0;
    for(l=self->head;l != NULL;l=l->next){
        c+=1;
    }
    return c;
}

int pylist_index(struct pylist *self,char *str){
    int c = 0;
    struct listnode *l;
    for(l=self->head;l != NULL;l=l->next){
        c+=1;
        if(strcmp(l->text,str)==0){
            return c;
            break;
        }
    }
    return -1;
}

struct dnode{
    char *key;
    char *value;
    struct dnode *next;
};

struct pydict{
    struct dnode *head;
    struct dnode *tail;
    int count;
};

struct pydict *pydict_new(void){
    struct pydict *p = malloc(sizeof(*p));
    p->head = NULL;
    p->tail = NULL;
    p->count = 0;
    return p;
}

void pydict_del(struct pydict *self){
    struct dnode *cur,*next;
    cur = self->head;
    while(cur){
        free(cur->key);
        free(cur->value);
        next = cur->next;
        free(cur);
        cur = next;
    }
    free((void*)self);
}

void pydict_put(struct pydict *self,char *key,char *value){
    struct dnode *new_node = malloc(sizeof(struct dnode));
    new_node->value = strdup(value);
    new_node->key = strdup(key);
    new_node->next = NULL;
    if(self->tail)
    {
        self->tail->next = new_node;
        if(self->head->next == NULL){
            self->head->next = self->tail->next;
        }
    }
    else
    {
        self->head = new_node;
    }
    if(strcmp(self->head->key,new_node->key)==0){
        self->head->value = strdup(value);
        self->head->next = NULL;
    }
    self->tail = new_node;
}

char *pydict_get(struct pydict *self,char *key){
    struct dnode *cur;
    for(cur=self->head;cur != NULL;cur=cur->next){
        if(strcmp(cur->key,key)==0){
            return cur->value;
        }
    }
    return NULL;
}

struct dnode* pydict_find(struct pydict* self,char *key)
{
    struct dnode *cur;
    for(cur=self->head;cur != NULL;cur=cur->next){
        if(strcmp(cur->key,key)==0){
            return cur;
        }
    }
    return NULL;
}

int pydict_len(const struct pydict* self)
{
    struct dnode *cur;
    int c = 0;
    for(cur=self->head;cur != NULL;cur=cur->next){
        c+=1;
    }
    return c;
}

void pydict_print(struct pydict* self)
{
    struct dnode *cur;
    int c=0,ct=0,v;
    for(cur=self->head;cur != NULL;cur=cur->next){
        c+=1;
    }
    v = c;
    printf("{");
    for(cur=self->head;cur!=NULL;cur=cur->next){
        ct+=1;
        printf("'%s': '%s'",cur->key,cur->value);
        if(ct>=1 && ct<v){
            printf(", ");
        }
    }
    printf("}");
    printf("\n");
}

struct MapEntry{
    char *key;
    int value;
    struct MapEntry *__prev;
    struct MapEntry *__next;
};

struct Map{
   struct MapEntry *__head;
   struct MapEntry *__tail;
   int __count;
   void (*put)(struct Map* self, char *key, int value);
   int (*get)(struct Map* self, char *key, int def);
   int (*size)(struct Map* self);
   void (*dump)(struct Map* self);
   void (*del)(struct Map* self);
};


void __Map_dump(struct Map* self)
{
    struct MapEntry *cur;
    printf("Object Map count=%d\n", self->__count);
    for(cur = self->__head; cur != NULL ; cur = cur->__next ) {
         printf("  %s=%d\n", cur->key, cur->value);
    }
}

struct MapEntry* __Map_find(struct Map* self,char *key)
{
    struct MapEntry *cur;
    if ( self == NULL || key == NULL ) return NULL;
    for(cur = self->__head; cur != NULL ; cur = cur->__next ) {
        if(strcmp(key, cur->key) == 0 ) return cur;
    }
    return NULL;
}

void __Map_put(struct Map* self, char *key, int value){
        struct MapEntry *new_node = malloc(sizeof(struct MapEntry));
        struct MapEntry *cur;
        int c = 0;
        new_node->value = value;
        new_node->key = strdup(key);
        new_node->__prev = new_node;
        new_node->__next = NULL;
        if(self->__tail)
        {
            self->__tail->__next = new_node;
            if(self->__head->__next == NULL){
                self->__head->__next = self->__tail->__next;
            }
        }
        else
        {
            self->__head = new_node;
        }
        if(strcmp(self->__head->key,new_node->key)==0){
            self->__head->value = value;
            self->__head->__next = NULL;
        }
        self->__tail = new_node;
        for(cur=self->__head;cur!=NULL;cur=cur->__next){
            c+=1;
         }
        self->__count = c;
}

int __Map_size(struct Map* self)
{
    struct MapEntry *cur = malloc(sizeof(struct MapEntry));
    int c = 0;
    for(cur=self->__head;cur!=NULL;cur=cur->__next){
        c+=1;
    }
    return c;
}

int __Map_get(struct Map* self, char *key, int def)
{
    struct MapEntry *cur = malloc(sizeof(struct MapEntry));
    for(cur=self->__head;cur != NULL;cur=cur->__next){
        if(strcmp(cur->key,key)==0){
            return cur->value;
        }
    }
    return def;
}

void __Map_del(struct Map* self){
    struct MapEntry *cur, *next;
    cur = self->__head;
    while(cur) {
        free(cur->key);
        next = cur->__next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

struct MapIter {
   struct MapEntry *__current;
   struct MapEntry* (*next)(struct MapIter *self);
   void (*del)(struct MapIter* self);
};

void __MapIter_del(struct MapIter* self) {
    free((void *)self);
}

struct MapEntry* __MapIter_next(struct MapIter *self)
{   struct MapEntry *re = self->__current;
    if(re == NULL){
      return NULL;
    }
    self->__current = self->__current->__next;
    return re;
}

struct MapIter* __Map_iter(struct Map* self)
{
    struct MapIter *iter = malloc(sizeof(*iter));
    iter->__current = self->__head;
    iter->next = &__MapIter_next;
    iter->del = &__MapIter_del;
    return iter;
}

struct Map *Map_new(void){
    struct Map *p = malloc(sizeof(*p));
    p->__head = NULL;
    p->__tail = NULL;
    p->__count = 0;
    p->put = __Map_put;
    p->dump = __Map_dump;
    p->get = __Map_get;
    p->size = __Map_size;
    p->del = __Map_del;
    return p;
}

struct HashMapEntry{
    char *key;
    int value;
    struct HashMapEntry *__prev;
    struct HashMapEntry *__next;
};

struct HashMapIter{
    int __bucket;
    struct HashMap *__map;
    struct HashMapEntry *__current;

    struct HashMapEntry* (*next)(struct HashMapIter* self);
    void (*del)(struct HashMapIter* self);
};

struct HashMap{
    int __buckets;
    struct HashMapEntry *__heads[8];
    struct HashMapEntry *__tails[8];
    int __count;

    void (*put)(struct HashMap* self, char *key, int value);
    int (*get)(struct HashMap* self, char *key, int def);
    int (*size)(struct HashMap* self);
    void (*dump)(struct HashMap* self);
    struct HashMapIter* (*iter)(struct HashMap* self);
    void (*del)(struct HashMap* self);
};

void __HashMap_del(struct HashMap* self)
{
    int i;
    struct HashMapEntry *cur, *next;

    for(i=0; i<self->__buckets; i++) {
        cur = self->__heads[i];
        while(cur) {
            free(cur->key);
            next = cur->__next;
            free(cur);
            cur = next;
        }
    }
    free((void *)self);
}

void __HashMap_dump(struct HashMap* self)
{
    int i;
    struct HashMapEntry *cur;
    printf("Object HashMap count=%d buckets=%d\n", self->__count, self->__buckets);
    for(i = 0; i < self->__buckets; i++ ) {
        for(cur = self->__heads[i]; cur != NULL ; cur = cur->__next ) {
            printf(" %s=%d [%d]\n", cur->key, cur->value, i);
        }
    }
}

struct HashMapEntry* __HashMap_find(struct HashMap* self, char *key, int bucket)
{
  struct HashMapEntry *cur;
  int i;
  for(i=0;i<self->__buckets;++i){
    for(cur=self->__heads[i];cur!=NULL;cur=cur->__next){
      if(strcmp(cur->key,key)==0){
        return cur;
     }
    }
  }
  return NULL;
}

int getBucket(char *str,int buckets)
{
    int hash = 42;
    if(str == NULL){
        return 0;
    }
    for( ;*str ;str++){
        hash = (hash << 3)^*str;
    }
    return hash % buckets;
}

void __HashMap_put(struct HashMap* self, char *key, int value){
    struct HashMapEntry *new_node = malloc(sizeof(struct HashMapEntry));
    struct HashMapEntry *cur;
    int ct=0;
    new_node->value = value;
    new_node->key = strdup(key);
    new_node->__next = NULL;
    unsigned long i = getBucket(key,self->__buckets);
    if(self->__tails[i])
    {
        self->__tails[i]->__next = new_node;
        if(self->__heads[i]->__next == NULL){
            self->__heads[i]->__next = self->__tails[i]->__next;
        }
    }
    else
    {
        self->__heads[i] = new_node;
    }
    if(strcmp(self->__heads[i]->key,new_node->key)==0){
        self->__heads[i]->value = value;
        self->__heads[i]->__next = NULL;
    }
    self->__tails[i] = new_node;
    for(i=0;i<self->__buckets;++i){
        for(cur=self->__heads[i];cur!=NULL;cur=cur->__next){
        ct+=1;
      }
    }
    self->__count = ct;
}

int __HashMap_size(struct HashMap* self)
{
   struct HashMapEntry *cur;
   int c = 0;
   int i;
   for(i=0;i<self->__buckets;++i){
       for(cur=self->__heads[i];cur!=NULL;cur=cur->__next){
       c+=1;
     }
   }
   return c;
}

struct HashMapEntry* __HashMapIter_next(struct HashMapIter* self)
{
       struct HashMapEntry* retval = NULL;
       if(self->__current != NULL){
           retval = self->__current;
           self->__current = self->__current->__next;
           return retval;
       }

       while(++self->__bucket < self->__map->__buckets){
           self->__current = self->__map->__heads[self->__bucket];
           if(self->__current != NULL){
               retval = self->__current;
               self->__current = self->__current->__next;
               return retval;
           }
       }
       return NULL;
}

int __HashMap_get(struct HashMap* self, char *key, int def)
{
    struct HashMapEntry *cur;
    int i;
    for(i=0;i<self->__buckets;++i){
      for(cur=self->__heads[i];cur!=NULL;cur=cur->__next){
        if(strcmp(cur->key,key)==0){
          return cur->value;
        }
      }
    }
    return def;
}

void __HashMapIter_del(struct HashMapIter* self){
    free((void *)self);
}

struct HashMapIter* __HashMap_iter(struct HashMap* map)
{
    struct HashMapIter *iter = malloc(sizeof(*iter));
    iter->__map = map;
    iter->__bucket = 0;
    iter->__current = map->__heads[iter->__bucket];
    iter->next = &__HashMapIter_next;
    iter->del = &__HashMapIter_del;
    return iter;
}

struct HashMap *HashMap_new(void){
    struct HashMap *p = malloc(sizeof(*p));
    int i;

    p->__buckets = 8;
    for(i=0; i < p->__buckets; i++ ) {
        p->__heads[i] = NULL;
        p->__tails[i] = NULL;
    }

    p->__count = 0;

    p->put = &__HashMap_put;
    p->get = &__HashMap_get;
    p->size = &__HashMap_size;
    p->dump = &__HashMap_dump;
    p->iter = &__HashMap_iter;
    p->del = &__HashMap_del;
    return p;
}

struct TreeMapEntry {
    char *key;
    int value;
    struct TreeMapEntry *__next;
    struct TreeMapEntry *__left;
    struct TreeMapEntry *__right;
};

struct TreeMapIter {
   struct TreeMapEntry *__current;
   struct TreeMapEntry* (*next)(struct TreeMapIter* self);
   void (*del)(struct TreeMapIter* self);
};

struct TreeMap {
   struct TreeMapEntry *__head;
   struct TreeMapEntry *__root;
   int __count;
   int debug;
   void (*put)(struct TreeMap* self, char *key, int value);
   int (*get)(struct TreeMap* self, char *key, int def);
   int (*size)(struct TreeMap* self);
   void (*dump)(struct TreeMap* self);
   struct TreeMapIter* (*iter)(struct TreeMap* self);
   void (*del)(struct TreeMap* self);
};

void __TreeMap_del(struct TreeMap* self) {
    struct TreeMapEntry *cur, *next;
    cur = self->__head;
    while(cur) {
        free(cur->key);
        next = cur->__next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

void __TreeMapIter_del(struct TreeMapIter* self) {
    free((void *)self);
}

void __TreeMap_dump_tree(struct TreeMapEntry *cur, int depth)
{
    int i;
    if ( cur == NULL ) return;
    for(i=0;i<depth;i++) printf("| ");
    printf("%s=%d\n", cur->key, cur->value);
    if ( cur->__left != NULL ) {
        __TreeMap_dump_tree(cur->__left, depth+1);
    }
    if ( cur->__right != NULL ) {
        __TreeMap_dump_tree(cur->__right, depth+1);
    }
}

void __TreeMap_dump(struct TreeMap* self)
{
    struct TreeMapEntry *cur;
    printf("Object TreeMap count=%d\n", self->__count);
    for(cur = self->__head; cur != NULL ; cur = cur->__next ) {
         printf("  %s=%d\n", cur->key, cur->value);
    }
    printf("\n");
    __TreeMap_dump_tree(self->__root, 0);
    printf("\n");
}

int __TreeMap_get(struct TreeMap* self, char *key, int def)
{
    int cmp;
    int i;
    struct TreeMapEntry *cur;
    if ( self == NULL || key == NULL || self->__root == NULL ) return def;
    cur = self->__root;
    for(cur=self->__root;cur!=NULL;cur=cur->__next){
      if(strcmp(cur->key,key)==0){
        return cur->value;
      }
    }
    return def;
}

void __TreeMap_put(struct TreeMap* self, char *key, int value) {
    struct TreeMapEntry *cur, *left, *right;
    int cmp;
    struct TreeMapEntry *old, *new;
    char *new_key;

    cur = self->__root;
    left = NULL;
    right = NULL;
    while(cur != NULL){
      cmp = strcmp(cur->key,key);
      if(cmp==0){
        cur->value = value;
        return;
      }
      else if(cmp<0){
        right = cur;
        cur = cur->__left;
      }
      else{
        left = cur;
        cur = cur->__right;
      }
    }
    int c=0;
    for(cur=self->__root;cur!=NULL;cur=cur->__next){
      c+=1;
    }
    self->__count = c;
    new = malloc(sizeof(*new));
    
   
    if ( self->__head == NULL ) {
        self->__head = new;
        self->__root = new;
        return;
    }
    if(right != NULL && right->__left == NULL){
        right->__left = new;
    }
    else if(left != NULL && left->__right == NULL){
        left->__right = new;
    }
    else{
        printf("FAIL\n");
    }
   
    if(left != NULL){
        new->__next = right;
        left->__next = new;
    }
    else{
        new->__next = self->__head;
        self->__head = new;
    }

}


void __Map_check(struct TreeMap* self, struct TreeMapEntry *left, char *key, struct TreeMapEntry *right)
{
    if ( self->debug )
        printf("Check position: %s < %s > %s\n", (left ? left->key : "0"),
            key, (right ? right->key : "0") );
    if ( left != NULL ) {
        if ( left->__next != right ) {
            printf("FAIL left->__next != right\n");
        }
    } else {
        if ( self->__head != right ) {
            printf("FAIL self->__head != right\n");
        }
    }
    if ( right != NULL && right->__left == NULL ) {
    } else if ( left != NULL && left->__right == NULL ) {
    } else {
        printf("FAIL Neither right->__left nor left->__right are available\n");
    }
}


int __TreeMap_size(struct TreeMap* self)
{
    return self->__count;
}

struct TreeMapEntry* __TreeMapIter_next(struct TreeMapIter* self)
{
       struct TreeMapEntry* retval = NULL;
       if(self->__current != NULL){
           retval = self->__current;
           self->__current = self->__current->__next;
           return retval;
       }
      while(self->__current != NULL){
          self->__current = self->__current->__next;
          if(self->__current != NULL){
              retval = self->__current;
              self->__current = self->__current->__next;
              return retval;
        }
    }
    return NULL;
}

struct TreeMapIter* __TreeMap_iter(struct TreeMap* self)
{
    struct TreeMapIter *iter = malloc(sizeof(*iter));
    iter->__current = self->__head;
    iter->next = &__TreeMapIter_next;
    iter->del = &__TreeMapIter_del;
    return iter;
}

struct TreeMap * TreeMap_new(void){
    struct TreeMap *p = malloc(sizeof(*p));

    p->__head = NULL;
    p->__root = NULL;
    p->__count = 0;
    p->debug = 0;

    p->put = &__TreeMap_put;
    p->get = &__TreeMap_get;
    p->size = &__TreeMap_size;
    p->dump = &__TreeMap_dump;
    p->iter = &__TreeMap_iter;
    p->del = &__TreeMap_del;
    return p;
}


int main(void){
    //      uniq();
    //      int empno;
    //      float rate, hours, pay;
    //
    //      while(1) {
    //        if ( scanf("%d %f %f",&empno,&rate,&hours) < 3 ) break;
    //       calcpay(&pay, &rate, &hours);
    //        printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n",empno, rate, hours, pay);
    //      }
    //  concatestring();
    //  py_rstrip();
    // ls_strip();
    // LBS290EX14();
    //      char line[1000];
    //      strcpy(line,"Hi there and welcome to LBS290");
    //      LBS290EX15(line);
    //       strcpy(line,"I love C");
    //      LBS290EX15(line);
     //  LBS290EX17();
//    struct point{
//        double x;
//        double y;
//    };
//    struct point pt,*pp;
//    pp = &pt;
//    (*pp).x = 3.4;
//    (*pp).y = 4.3;
//    printf("%p %.1f %.1f\n",pp,pp->x,pp->y);

     //         printf("Playing with structures\n");
    //         struct simpledate sd;
    //         sd.year = 2023;
    //         sd.month = 2;
    //         sd.day = 11;
    //         dump_date(&sd);
    //         printf("Day of year %d\n", day_of_year(&sd));
    //        sd.year = 2023;
    //        sd.month = 9;
    //        sd.day = 15;
    //        dump_date(&sd);
    //        printf("Day of year %d\n", day_of_year(&sd));
    //        sd.year = 2024;
    //        sd.month = 9;
    //        sd.day = 15;
    //        dump_date(&sd);
    //        printf("Day of year %d\n", day_of_year(&sd));
    
//    struct list mylist;
//    mylist.head = NULL;
//    mylist.tail = NULL;

//    list_add(&mylist,10);
//    list_add(&mylist,20);
//    list_add(&mylist,30);
//    list_dump(&mylist);

//    list_remove(&mylist,42);

//    list_remove(&mylist,10);
//    list_dump(&mylist);

//    list_remove(&mylist,30);
//    list_dump(&mylist);

//    list_add(&mylist,40);
//    list_dump(&mylist);
    
//       struct pystr *x = pystr_new();
//       pystr_dump(x);

//       pystr_append(x, 'H');
//       pystr_dump(x);

//      pystr_appends(x, "ello world");
//      pystr_dump(x);

//       pystr_assign(x, "A completely new string");
//       printf("String = %s\n", pystr_str(x));
//       printf("Length = %d\n", pystr_len(x));
//       pystr_del(x);
    
//          struct pylist *lst = pylist_new();
//          pylist_append(lst,"Hello world");
//          pylist_append(lst,"Catch phrase");
//          pylist_print(lst);
//          pylist_append(lst, "Brian");
//          pylist_print(lst);
//          printf("Length = %d\n", pylist_len(lst));
//          printf("Brian? %d\n", pylist_index(lst, "Brian"));
//          printf("Bob? %d\n", pylist_index(lst, "Bob"));
//          pylist_del(lst);
//    struct dnode *cur;
//    struct pydict *dct = pydict_new();
//    pydict_put(dct, "z", "Catch phrase");
//    pydict_print(dct);
//    pydict_put(dct, "z", "W");
//    pydict_print(dct);
//    pydict_put(dct, "y", "B");
//    pydict_put(dct, "c", "C");
//    pydict_put(dct, "a", "D");
//    pydict_print(dct);
//    printf("Length =%d\n",pydict_len(dct));
//    printf("\n");
//    printf("z=%s\n", pydict_get(dct, "z"));
//    printf("x=%s\n", pydict_get(dct, "x"));
//    printf("%p\n",pydict_find(dct,"y"));
//    printf("\nDump\n");
//    for(cur = dct->head; cur != NULL ; cur = cur->next ){
//        printf("%s=%s\n", cur->key, cur->value);
//    }
//    pydict_del(dct);
//       struct Map *map = Map_new();
       // struct MapEntry *cur;
//       setvbuf(stdout,NULL,_IONBF,0);
//       printf("Map test\n");
//       map->put(map,"z",8);
//       map->put(map,"z",1);
//       map->put(map,"y",2);
//       map->put(map,"b",3);
//       map->put(map,"a",4);
//       map->dump(map);
//       printf("size=%d\n",map->size(map));
//       printf("z=%d\n",map->get(map,"z",42));
//       printf("x=%d\n",map->get(map,"x",42));
//       map->del(map);
//        struct HashMap *map = HashMap_new();
//        struct HashMapEntry *cur;
//        struct HashMapIter *iter;
    
//        setvbuf(stdout, NULL, _IONBF, 0);
//
//        printf("Testing HashMap\n");
//        map->put(map, "z", 8);
//        map->put(map, "z", 1);
//        map->put(map, "y", 2);
//        map->put(map, "b", 3);
//        map->put(map, "a", 4);
//        map->dump(map);
//
//        printf("size=%d\n", map->size(map));
//
//        printf("z=%d\n", map->get(map, "z", 42));
//        printf("x=%d\n", map->get(map, "x", 42));
//
//       printf("\nIterate\n");
//        iter = map->iter(map);
//        while(1){
//            cur = iter->next(iter);
//            if(cur == NULL) break;
//            printf(" %s=%d\n", cur->key, cur->value);
//        }
//        iter->del(iter);
//        map->del(map);
    
    /* EXPLORING C */
//Exercise RS-1
                printf("Hello world\nAnswer %d\nName %s\n",15,"Sarah");
    
//Exercise RS-2
                int usf,euf;
                printf("Enter US Floor\n");
                scanf("%d",&usf);
                euf = usf-1;
                printf("EU Floor %d\n",euf);
    
//Exercise RS-3
                char s[100];
                printf("Enter name\n");
                scanf("%[^\n]%*c",s);
                printf("Hello %s\n",s);
    
//Exercise RS-4
                char input[100];
                printf("Enter line\n");
                scanf("%[^\n]%*c",s);
                printf("Line: %s",s);
//Exercise RS-5
               char line[100];
               printf("Enter line\n");
               fgets(s,100,stdin);
               printf("Line: %s\n",s);

//Exercise RS-6
                int i;
                for(i=0;i<5;++i){
                    printf("%d\n",i);
                }

//Exercise RS-7
                int maxval=0,minval=0,first=1;
                char val[100];
    while(fgets(val,100,stdin) != NULL){
        if(strcmp(val,"done\n")==0){
            break;
        }
        if(first || atoi(val) > maxval){
            maxval = atoi(val);
        }
        if(first || atoi(val) < minval){
            minval = atoi(val);
        }
        first = 0;
    }
        printf("Maximum %d\nMinimum %d\n",maxval,minval);
    
//Exercise RS-8
            char vall[100];
            while(scanf("%s",val)!=EOF){
              if(atoi(val)==42){
                printf("Nice work!\n");
                break;
              }
              else if(atoi(val)<42){
                printf("Too low - guess again\n");
              }
              else if(atoi(val)>42){
                printf("Too high - guess again\n");
              }
            }

//K&R Exercise 1-3
                    int fahr;
                    printf("FAHR   CELSIUS\n");
                    printf("===============\n");
                    for (fahr = 0; fahr <= 300; fahr = fahr + 40){
                        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
                    }
    
//K&R Exercise 1-4
                    int cel;
                    for(cel = 0; cel <= 100; cel = cel + 20){
                        printf("%4d %6.1f\n", cel, (cel*(9.0/5.0))+32.0);
                    }
    
//K&R Exercise 1-5
                    int fahrenhiet;
                    for(fahr = 300; fahr >= 0; fahr = fahr - 20){
                        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
                    }
    
//LBS290 Exercise 4
                    char c;
                    int value;
                    int _i;
                    float x;
        
                    printf("Hello there and welcome to the program\n");
                    _i = 10;
                    x = 2.50;
                    x = x + 1.L;
                    value = 15;

                    printf("This statement should print out, why doesn't it?\n");
                    printf("This statement does print out, yay!\n");
    
//K&R Exercise 1-6
                    char _c;
                    int nl=0,bl=0;
                    while ((_c = getchar()) != EOF){
                        if (_c == '\n'){
                            ++nl;
                        }
                        else if(_c == ' '){
                            ++bl;
                        }
                    }
                    printf("%d %d\n",bl,nl);
    
//K&R Exercise 1-7
                    char _inp[1000];
                    int o;
                    for(o=0;o<1000;++o){
                        scanf("%c",&s[o]);
                        if(s[o]=='\0'){
                            break;
                            }
                    }
                    char d[1000];
                    int j = 0,u,h;
                    int in_space = 0;
                    for(u = 0; u < o; ++u){
                        if(s[u] != ' '){
                            d[j++] = s[u];
                            in_space = 0;
                        }
                        else if(!in_space){
                            d[j++] = ' ';
                            in_space = 1;
                        }
                    }
                    d[j] = '\0';
                    for(h=0;h<j;++h){
                        printf("%c",d[h]);
                        if(d[h]=='\0'){
                            break;
                        }
                    }
    
//K&R Exercise 1-10
                    char _input[1000];
                    int _w;
                    for(_w=0;_w<1000;++_w){
                        scanf("%c",&_input[_w]);
                        if(_input[_w]==' '){
                            _input[_w] = '\n';
                        }
                        if(_input[_w]=='\0'){
                            break;
                        }
                    }
                    printf("%s",_input);
    
//    char t[1000];
//     char *copy();
//     void reverse();
//     printf("%s\n", t);
//     reverse(t);
//     printf("%s\n", t);
//     reverse(copy("XY", t));
//     printf("%s\n", t);
//     reverse(copy("Even", t));
//     printf("%s\n", t);
//     reverse(copy("Odd", t));
//     printf("%s\n", t);
//     reverse(copy("civic", t));
//     printf("%s\n", t);
//   }

   /* copy s1 to s2; assume s2 big enough */
//   char *copy(s1, s2)
//   char s1[], s2[];
//   {
//       int i;
//       for(i=0;(s2[i] = s1[i]);i++);
//       return s2;
//   }
    
    
    
    
    
    return 0;
}
