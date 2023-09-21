#include <new>
#include <common.h>
#include <operations.h>

namespace bambloo {
void* allocate_memory(size_t elems, size_t elem_size) {
   if(elems == 0 || elem_size == 0) {
      return nullptr;
   }

   // Some calloc implementations do not check for overflow (?!?)

   if(!checked_mul(elems, elem_size).has_value()) {
      throw std::bad_alloc();
   }

   void* ptr = std::calloc(elems, elem_size);  // NOLINT(*-no-malloc)
   if(!ptr) {
      [[unlikely]] throw std::bad_alloc();
   }
   return ptr;
}

void deallocate_memory(void* memory, size_t elems, size_t elem_size) {
   if (!memory) {
      [[unlikely]]return;
   }

   memset(memory, 0, elems * elem_size);
   std::free(memory);
}

}