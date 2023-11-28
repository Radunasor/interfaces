typedef struct
{
    void (*print_impl)(int, int);
} Iimpl;

extern Iimpl *get_impl_instance();