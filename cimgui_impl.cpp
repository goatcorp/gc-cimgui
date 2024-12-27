#include "./imgui/imgui.h"
#include "./imgui/imgui_internal.h"
#include "./imgui/backends/imgui_impl_win32.h"
#include "./imgui/backends/imgui_impl_dx11.h"

#include "cimgui.h"

ImGuiAssertCallback g_AssertCallback = nullptr;

// Function to set the callback
CIMGUI_API void igCustom_SetAssertCallback(ImGuiAssertCallback callback)
{
    g_AssertCallback = callback;
}

CIMGUI_API void* igCustom_GetInputTextState()
{
    return &GImGui->InputTextState;
}

// These are used in DalamudIme to interact with text boxes
CIMGUI_API void igCustom_StbTextMakeUndoReplace(ImGuiInputTextState* str, int where, int old_length, int new_length)
{
    ImGui::Custom_StbTextMakeUndoReplace(str, where, old_length, new_length);
}

CIMGUI_API void igCustom_StbTextUndo(ImGuiInputTextState* str)
{
    ImGui::Custom_StbTextUndo(str);
}

// These are done manually, zzz
#ifdef CIMGUI_USE_WIN32
#include <windows.h>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

CIMGUI_API bool igImpls_ImplWin32_Init(void* hwnd)
{
	return ImGui_ImplWin32_Init(hwnd);
}

CIMGUI_API LRESULT igImpls_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	return ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam);
}

CIMGUI_API void igImpls_ImplWin32_Shutdown()
{
	ImGui_ImplWin32_Shutdown();
}

CIMGUI_API void igImpls_ImplWin32_NewFrame()
{
	ImGui_ImplWin32_NewFrame();
}

CIMGUI_API void igImpls_ImplWin32_EnableDpiAwareness()
{
	ImGui_ImplWin32_EnableDpiAwareness();
}

CIMGUI_API float igImpls_ImplWin32_GetDpiScaleForHwnd(void* hwnd)
{
	return ImGui_ImplWin32_GetDpiScaleForHwnd(hwnd);
}

CIMGUI_API float igImpls_ImplWin32_GetDpiScaleForMonitor(void* monitor)
{
	return ImGui_ImplWin32_GetDpiScaleForMonitor(monitor);
}

CIMGUI_API void igImpls_ImplWin32_EnableAlphaCompositing(void* hwnd)
{
	return ImGui_ImplWin32_EnableAlphaCompositing(hwnd);
}

#endif

#ifdef CIMGUI_USE_DX11

CIMGUI_API bool igImpls_ImplDX11_Init(ID3D11Device* device, ID3D11DeviceContext* device_context)
{
	return ImGui_ImplDX11_Init(device, device_context);
}

CIMGUI_API void igImpls_ImplDX11_Shutdown()
{
	ImGui_ImplDX11_Shutdown();
}

CIMGUI_API void igImpls_ImplDX11_NewFrame()
{
	ImGui_ImplDX11_NewFrame();
}

CIMGUI_API void igImpls_ImplDX11_RenderDrawData(ImDrawData* draw_data)
{
	ImGui_ImplDX11_RenderDrawData(draw_data);
}

CIMGUI_API void igImpls_ImplDX11_InvalidateDeviceObjects()
{
	ImGui_ImplDX11_InvalidateDeviceObjects();
}

CIMGUI_API bool igImpls_ImplDX11_CreateDeviceObjects()
{
	return ImGui_ImplDX11_CreateDeviceObjects();
}

#endif
