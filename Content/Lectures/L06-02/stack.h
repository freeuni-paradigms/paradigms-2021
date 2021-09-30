typedef struct {
  void* base;
  int elem_size;
  int log_len;
  int alloc_len;
} Stack;

void StackInit(Stack* s, int elem_size);
void StackDestroy(Stack* s);
void StackPush(Stack* s, void* value);
void StackPop(Stack* s, void* out);
