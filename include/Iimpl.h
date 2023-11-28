#include <stdbool.h>

typedef struct
{
    void (*initialize)();
    void (*destroy)();
    bool (*is_initialized)();
    void (*print_impl)();
} Iimpl;

extern Iimpl *get_impl_instance();