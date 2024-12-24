#include <assert.h>
#include <cstdio>

// Callback type definition
typedef void (*ImGuiAssertCallback)(const char* expr, const char* file, int line);

// Global callback pointer
extern ImGuiAssertCallback g_AssertCallback;

// Assert macro
#define IM_ASSERT(_EXPR) do { \
    if (!(_EXPR) && g_AssertCallback) { \
        g_AssertCallback(#_EXPR, __FILE__, __LINE__); \
    } \
    assert(_EXPR); \
} while (0)
