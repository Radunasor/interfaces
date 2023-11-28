#include <stdbool.h>

typedef struct
{
    void (*initialize)();
    void (*destroy)();
    bool (*is_initialized)();
    void (*print_impl)();
} Iimpl;

extern const Iimpl *get_impl_instance();