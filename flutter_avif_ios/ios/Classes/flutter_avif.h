#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct DartData
{
  uint8_t *ptr;
  int32_t len;
} DartData;

struct DartData decode_single_frame_image(const unsigned char *ptr, uintptr_t len);

struct DartData init_memory_decoder(const unsigned char *ptr, uintptr_t len);

bool reset_decoder(const unsigned char *ptr, uintptr_t len);

bool dispose_decoder(const unsigned char *ptr, uintptr_t len);

struct DartData get_next_frame(const unsigned char *ptr, uintptr_t len);

struct DartData encode_avif(const unsigned char *ptr, uintptr_t len);

void free_dart_data(struct DartData data);

static int64_t dummy_method_to_enforce_bundling(void)
{
  int64_t dummy_var = 0;
  dummy_var ^= ((int64_t)(void *)decode_single_frame_image);
  dummy_var ^= ((int64_t)(void *)init_memory_decoder);
  dummy_var ^= ((int64_t)(void *)reset_decoder);
  dummy_var ^= ((int64_t)(void *)dispose_decoder);
  dummy_var ^= ((int64_t)(void *)get_next_frame);
  dummy_var ^= ((int64_t)(void *)encode_avif);
  dummy_var ^= ((int64_t)(void *)free_dart_data);
  return dummy_var;
}