typedef struct
{
    void (*print_impl)();
} Iimpl;

extern Iimpl *get_impl_instance();