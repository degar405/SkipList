struct skiplist {
    int info;
    struct skiplist* prox;
    struct skiplist* baixo;
};
typedef struct skiplist SkipList;
SkipList* criaSkipList();
void liberaSkipList(SkipList** sl);
int insereSkipList(SkipList* sl, int N);
int removeSkipList(SkipList* sl, int N);
int buscaSkipList(SkipList* sl, int N);
int tamanhoSkipList(SkipList* sl);
int vaziaSkipList(SkipList* sl);
void imprimeSkipList(SkipList* sl);
