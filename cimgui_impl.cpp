#include "./imgui/imgui.h"
#include "./imgui/imgui_internal.h"

#include "cimgui.h"

CIMGUI_API void igCustom_ClearStacks()
{
    ImGuiContext& g = *GImGui;
    g.ColorStack.clear();
    g.StyleVarStack.clear();
    g.FontStack.clear();
}

// These are done manually, zzz
#ifdef CIMGUI_USE_WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "./imgui/backends/imgui_impl_win32.h"

IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

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

#include "./imgui/backends/imgui_impl_dx11.h"

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

#ifdef CIMGUI_USE_DX12

#include <d3d12.h>
#include "./imgui/backends/imgui_impl_dx12.h"

CIMGUI_API bool igImpls_ImplDX12_Init(ID3D12Device* device, int num_frames_in_flight, DXGI_FORMAT rtv_format, ID3D12DescriptorHeap* cbv_srv_heap,
                                            D3D12_CPU_DESCRIPTOR_HANDLE font_srv_cpu_desc_handle, D3D12_GPU_DESCRIPTOR_HANDLE font_srv_gpu_desc_handle)
{
	return ImGui_ImplDX12_Init(device, num_frames_in_flight, rtv_format, cbv_srv_heap, font_srv_cpu_desc_handle, font_srv_gpu_desc_handle);
}

CIMGUI_API void igImpls_ImplDX12_Shutdown()
{
	ImGui_ImplDX12_Shutdown();
}

CIMGUI_API void igImpls_ImplDX12_NewFrame()
{
	ImGui_ImplDX12_NewFrame();
}

CIMGUI_API void igImpls_ImplDX12_RenderDrawData(ImDrawData* draw_data, ID3D12GraphicsCommandList* graphics_command_list)
{
	ImGui_ImplDX12_RenderDrawData(draw_data, graphics_command_list);
}

CIMGUI_API void igImpls_ImplDX12_InvalidateDeviceObjects()
{
	ImGui_ImplDX12_InvalidateDeviceObjects();
}

CIMGUI_API bool igImpls_ImplDX12_CreateDeviceObjects()
{
	return ImGui_ImplDX12_CreateDeviceObjects();
}

#endif
