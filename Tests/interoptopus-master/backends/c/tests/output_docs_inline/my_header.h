// Automatically generated by Interoptopus.

#ifndef interoptopus_generated
#define interoptopus_generated

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>



const uint8_t MY_LIBRARY_U8 = 255;
const float MY_LIBRARY_F32_MIN_POSITIVE = 0.000000000000000000000000000000000000011754944;
const int32_t MY_LIBRARY_COMPUTED_I32 = -2147483647;

/// Documented enum.
typedef enum my_library_enum_documented
{
    MY_LIBRARY_ENUM_DOCUMENTED_A = 0,
    MY_LIBRARY_ENUM_DOCUMENTED_B = 1,
    MY_LIBRARY_ENUM_DOCUMENTED_C = 2,
} my_library_enum_documented;

typedef enum my_library_enum_renamed
{
    MY_LIBRARY_ENUM_RENAMED_X = 0,
} my_library_enum_renamed;

typedef struct my_library_generic2u8 my_library_generic2u8;

typedef struct my_library_generic3 my_library_generic3;

typedef struct my_library_generic4 my_library_generic4;

typedef struct my_library_opaque my_library_opaque;

/// Some struct we want to expose as a class.
typedef struct my_library_simple_service my_library_simple_service;

typedef struct my_library_simple_service_lifetime my_library_simple_service_lifetime;

typedef enum my_library_ffi_error
{
    MY_LIBRARY_FFI_ERROR_OK = 0,
    MY_LIBRARY_FFI_ERROR_NULL = 100,
    MY_LIBRARY_FFI_ERROR_PANIC = 200,
    MY_LIBRARY_FFI_ERROR_FAIL = 300,
} my_library_ffi_error;

typedef struct my_library_extra_typef32
{
    float x;
} my_library_extra_typef32;

typedef struct my_library_inner
{
    float x;
} my_library_inner;

typedef struct my_library_phantomu8
{
    uint32_t x;
} my_library_phantomu8;

typedef struct my_library_some_foreign_type
{
    uint32_t x;
} my_library_some_foreign_type;

/// Documented struct.
typedef struct my_library_struct_documented
{
    float x;
} my_library_struct_documented;

typedef struct my_library_struct_renamed
{
    my_library_enum_renamed e;
} my_library_struct_renamed;

typedef struct my_library_tupled
{
    uint8_t x0;
} my_library_tupled;

typedef struct my_library_use_ascii_string_pattern
{
    const char* ascii_string;
} my_library_use_ascii_string_pattern;

typedef struct my_library_vec
{
    double x;
    double z;
} my_library_vec;

typedef struct my_library_vec1
{
    float x;
    float y;
} my_library_vec1;

typedef struct my_library_vec2
{
    double x;
    double z;
} my_library_vec2;

typedef struct my_library_vec3f32
{
    float x;
    float y;
    float z;
} my_library_vec3f32;

typedef struct my_library_visibility1
{
    uint8_t pblc;
    uint8_t prvt;
} my_library_visibility1;

typedef struct my_library_visibility2
{
    uint8_t pblc1;
    uint8_t pblc2;
} my_library_visibility2;

typedef struct my_library_weird1u32
{
    uint32_t x;
} my_library_weird1u32;

typedef uint8_t (*my_library_fptr_fn_u8_rval_u8)(uint8_t x0);

typedef uint8_t (*my_library_callback_u8)(uint8_t value);

typedef uint32_t (*my_library_my_callback)(uint32_t value);

typedef struct my_library_array
{
    uint8_t data[16];
} my_library_array;

typedef struct my_library_genericu32
{
    const uint32_t* x;
} my_library_genericu32;

typedef struct my_library_genericu8
{
    const uint8_t* x;
} my_library_genericu8;

typedef struct my_library_weird2u8
{
    uint8_t t;
    uint8_t a[5];
    const uint8_t* r;
} my_library_weird2u8;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_bool
{
    const uint8_t* data;
    uint64_t len;
} my_library_slice_bool;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_sliceu32
{
    const uint32_t* data;
    uint64_t len;
} my_library_sliceu32;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_sliceu8
{
    const uint8_t* data;
    uint64_t len;
} my_library_sliceu8;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mutu32
{
    const uint32_t* data;
    uint64_t len;
} my_library_slice_mutu32;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mutu8
{
    const uint8_t* data;
    uint64_t len;
} my_library_slice_mutu8;

///Option type containing boolean flag and maybe valid data.
typedef struct my_library_option_inner
{
    my_library_inner t;
    uint8_t is_some;
} my_library_option_inner;

///Option type containing boolean flag and maybe valid data.
typedef struct my_library_option_vec
{
    my_library_vec t;
    uint8_t is_some;
} my_library_option_vec;

typedef void (*my_library_my_callback_void)(const void* ptr);

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_use_ascii_string_pattern
{
    const my_library_use_ascii_string_pattern* data;
    uint64_t len;
} my_library_slice_use_ascii_string_pattern;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_vec
{
    const my_library_vec* data;
    uint64_t len;
} my_library_slice_vec;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_vec3f32
{
    const my_library_vec3f32* data;
    uint64_t len;
} my_library_slice_vec3f32;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mut_vec
{
    const my_library_vec* data;
    uint64_t len;
} my_library_slice_mut_vec;

typedef uint8_t (*my_library_callback_ffi_slice)(my_library_sliceu8 slice);

typedef void (*my_library_callback_slice_mut)(my_library_slice_mutu8 slice);

typedef my_library_vec3f32 (*my_library_callback_huge_vec_slice)(my_library_slice_vec3f32 slice);


void primitive_void();

void primitive_void2();

bool primitive_bool(bool x);

uint8_t primitive_u8(uint8_t x);

uint16_t primitive_u16(uint16_t x);

uint32_t primitive_u32(uint32_t x);

uint64_t primitive_u64(uint64_t x);

int8_t primitive_i8(int8_t x);

int16_t primitive_i16(int16_t x);

int32_t primitive_i32(int32_t x);

int64_t primitive_i64(int64_t x);

int64_t many_args_5(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4);

int64_t many_args_10(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4, int64_t x5, int64_t x6, int64_t x7, int64_t x8, int64_t x9);

const int64_t* ptr(const int64_t* x);

/// # Safety
///
/// Parameter x must point to valid data.
int64_t* ptr_mut(int64_t* x);

const const int64_t** ptr_ptr(const const int64_t** x);

const int64_t* ref_simple(const int64_t* x);

int64_t* ref_mut_simple(int64_t* x);

bool ref_option(const int64_t* x);

bool ref_mut_option(int64_t* x);

my_library_tupled tupled(my_library_tupled x);

my_library_ffi_error complex_args_1(my_library_vec3f32 a, const my_library_tupled* b);

const my_library_opaque* complex_args_2(my_library_some_foreign_type cmplx);

uint8_t callback(my_library_fptr_fn_u8_rval_u8 callback, uint8_t value);

uint32_t generic_1a(my_library_genericu32 x, my_library_phantomu8 y);

uint8_t generic_1b(my_library_genericu8 x, my_library_phantomu8 y);

uint8_t generic_1c(const my_library_genericu8* x, const my_library_genericu8* y);

uint8_t generic_2(const my_library_generic2u8* x);

uint8_t generic_3(const my_library_generic3* x);

uint8_t generic_4(const my_library_generic4* x);

uint8_t array_1(my_library_array x);

/// This function has documentation.
my_library_enum_documented documented(my_library_struct_documented x);

my_library_vec1 ambiguous_1(my_library_vec1 x);

my_library_vec2 ambiguous_2(my_library_vec2 x);

bool ambiguous_3(my_library_vec1 x, my_library_vec2 y);

my_library_vec namespaced_type(my_library_vec x);

my_library_option_vec namespaced_inner_option(my_library_option_vec x);

my_library_slice_vec namespaced_inner_slice(my_library_slice_vec x);

my_library_slice_mut_vec namespaced_inner_slice_mut(my_library_slice_mut_vec x);

my_library_ffi_error panics();

my_library_enum_renamed renamed(my_library_struct_renamed x);

void sleep(uint64_t millis);

bool weird_1(my_library_weird1u32 x, my_library_weird2u8 y);

void visibility(my_library_visibility1 x, my_library_visibility2 y);

my_library_tupled repr_transparent(my_library_tupled x, const my_library_tupled* r);

uint32_t pattern_ascii_pointer_1(const char* x);

const char* pattern_ascii_pointer_2();

uint32_t pattern_ascii_pointer_len(const char* x, my_library_use_ascii_string_pattern y);

my_library_slice_use_ascii_string_pattern pattern_ascii_pointer_return_slice();

uint32_t pattern_ffi_slice_1(my_library_sliceu32 ffi_slice);

my_library_vec3f32 pattern_ffi_slice_2(my_library_slice_vec3f32 ffi_slice, int32_t i);

void pattern_ffi_slice_3(my_library_slice_mutu8 slice, my_library_callback_slice_mut callback);

void pattern_ffi_slice_4(my_library_sliceu8 slice, my_library_slice_mutu8 slice2);

void pattern_ffi_slice_5(const my_library_sliceu8* slice, my_library_slice_mutu8* slice2);

void pattern_ffi_slice_6(const my_library_slice_mutu8* slice, my_library_callback_u8 callback);

uint8_t pattern_ffi_slice_delegate(my_library_callback_ffi_slice callback);

my_library_vec3f32 pattern_ffi_slice_delegate_huge(my_library_callback_huge_vec_slice callback);

my_library_option_inner pattern_ffi_option_1(my_library_option_inner ffi_slice);

my_library_inner pattern_ffi_option_2(my_library_option_inner ffi_slice);

uint8_t pattern_ffi_bool(uint8_t ffi_bool);

char pattern_ffi_cchar(char ffi_cchar);

const char* pattern_ffi_cchar_const_pointer(const char* ffi_cchar);

char* pattern_ffi_cchar_mut_pointer(char* ffi_cchar);

uint64_t pattern_api_guard();

uint32_t pattern_callback_1(my_library_my_callback callback, uint32_t x);

my_library_my_callback_void pattern_callback_2(my_library_my_callback_void callback);

/// Destroys the given instance.
///
/// # Safety
///
/// The passed parameter MUST have been created with the corresponding init function;
/// passing any other value results in undefined behavior.
my_library_ffi_error simple_service_destroy(my_library_simple_service** context);

/// The constructor must return a `Result<Self, Error>`.
my_library_ffi_error simple_service_new_with(my_library_simple_service** context, uint32_t some_value);

my_library_ffi_error simple_service_new_without(my_library_simple_service** context);

my_library_ffi_error simple_service_new_with_string(my_library_simple_service** context, const char* ascii);

my_library_ffi_error simple_service_new_failing(my_library_simple_service** context, uint8_t some_value);

/// Methods returning a Result<(), _> are the default and do not
/// need annotations.
my_library_ffi_error simple_service_method_result(const my_library_simple_service* context, uint32_t anon1);

uint32_t simple_service_method_value(const my_library_simple_service* context, uint32_t x);

/// This method should be documented.
///
/// Multiple lines.
void simple_service_method_void(const my_library_simple_service* context);

uint8_t simple_service_method_mut_self(my_library_simple_service* context, my_library_sliceu8 slice);

/// Single line.
void simple_service_method_mut_self_void(my_library_simple_service* context, my_library_slice_bool slice);

uint8_t simple_service_method_mut_self_ref(my_library_simple_service* context, const uint8_t* x, uint8_t* y);

uint8_t simple_service_method_mut_self_ref_slice(my_library_simple_service* context, const uint8_t* x, uint8_t* y, my_library_sliceu8 slice);

uint8_t simple_service_method_mut_self_ref_slice_limited(my_library_simple_service* context, const uint8_t* x, uint8_t* y, my_library_sliceu8 slice, my_library_sliceu8 slice2);

my_library_ffi_error simple_service_method_mut_self_ffi_error(my_library_simple_service* context, my_library_slice_mutu8 slice);

my_library_ffi_error simple_service_method_mut_self_no_error(my_library_simple_service* context, my_library_slice_mutu8 slice);

/// Warning, you _must_ discard the returned slice object before calling into this service
/// again, as otherwise undefined behavior might happen.
my_library_sliceu32 simple_service_return_slice(my_library_simple_service* context);

/// Warning, you _must_ discard the returned slice object before calling into this service
/// again, as otherwise undefined behavior might happen.
my_library_slice_mutu32 simple_service_return_slice_mut(my_library_simple_service* context);

/// This function has no panic safeguards. If it panics your host app will be in an undefined state.
const char* simple_service_return_string(my_library_simple_service* context);

my_library_ffi_error simple_service_method_void_ffi_error(my_library_simple_service* context);

my_library_ffi_error simple_service_method_callback(my_library_simple_service* context, my_library_my_callback callback);

/// Destroys the given instance.
///
/// # Safety
///
/// The passed parameter MUST have been created with the corresponding init function;
/// passing any other value results in undefined behavior.
my_library_ffi_error simple_service_lt_destroy(my_library_simple_service_lifetime** context);

my_library_ffi_error simple_service_lt_new_with(my_library_simple_service_lifetime** context, const uint32_t* some_value);

void simple_service_lt_method_lt(my_library_simple_service_lifetime* context, my_library_slice_bool slice);

void simple_service_lt_method_lt2(my_library_simple_service_lifetime* context, my_library_slice_bool slice);

const char* simple_service_lt_return_string_accept_slice(my_library_simple_service_lifetime* anon0, my_library_sliceu8 anon1);

my_library_ffi_error simple_service_lt_method_void_ffi_error(my_library_simple_service_lifetime* context);


#ifdef __cplusplus
}
#endif

#endif /* interoptopus_generated */