
typedef unsigned int        ImGuiID;
typedef signed char         ImS8;   
typedef unsigned char       ImU8;   
typedef signed short        ImS16;  
typedef unsigned short      ImU16;  
typedef signed int          ImS32;  
typedef unsigned int        ImU32;  
typedef signed   long long  ImS64;  
typedef unsigned long long  ImU64;  
struct ImDrawChannel;               
struct ImDrawCmd;                   
struct ImDrawData;                  
struct ImDrawList;                  
struct ImDrawListSharedData;        
struct ImDrawListSplitter;          
struct ImDrawVert;                  
struct ImFont;                      
struct ImFontAtlas;                 
struct ImFontAtlasBuilder;          
struct ImFontAtlasRect;             
struct ImFontBaked;                 
struct ImFontConfig;                
struct ImFontGlyph;                 
struct ImFontGlyphRangesBuilder;    
struct ImFontLoader;                
struct ImTextureData;               
struct ImTextureRect;               
struct ImColor;                     
struct ImGuiContext;                
struct ImGuiIO;                     
struct ImGuiInputTextCallbackData;  
struct ImGuiKeyData;                
struct ImGuiListClipper;            
struct ImGuiMultiSelectIO;          
struct ImGuiOnceUponAFrame;         
struct ImGuiPayload;                
struct ImGuiPlatformIO;             
struct ImGuiPlatformImeData;        
struct ImGuiPlatformMonitor;        
struct ImGuiSelectionBasicStorage;  
struct ImGuiSelectionExternalStorage;
struct ImGuiSelectionRequest;       
struct ImGuiSizeCallbackData;       
struct ImGuiStorage;                
struct ImGuiStoragePair;            
struct ImGuiStyle;                  
struct ImGuiTableSortSpecs;         
struct ImGuiTableColumnSortSpecs;   
struct ImGuiTextBuffer;             
struct ImGuiTextFilter;             
struct ImGuiViewport;               
struct ImGuiWindowClass;            
enum ImGuiDir : int;                
enum ImGuiKey : int;                
enum ImGuiMouseSource : int;        
enum ImGuiSortDirection : ImU8;     
typedef int ImGuiCol;               
typedef int ImGuiCond;              
typedef int ImGuiDataType;          
typedef int ImGuiMouseButton;       
typedef int ImGuiMouseCursor;       
typedef int ImGuiStyleVar;          
typedef int ImGuiTableBgTarget;     
typedef int ImDrawFlags;            
typedef int ImDrawTextFlags;        
typedef int ImFontFlags;            
typedef int ImFontAtlasFlags;       
typedef int ImGuiBackendFlags;      
typedef int ImGuiButtonFlags;       
typedef int ImGuiChildFlags;        
typedef int ImGuiColorEditFlags;    
typedef int ImGuiConfigFlags;       
typedef int ImGuiComboFlags;        
typedef int ImGuiDockNodeFlags;     
typedef int ImGuiDragDropFlags;     
typedef int ImGuiFocusedFlags;      
typedef int ImGuiHoveredFlags;      
typedef int ImGuiInputFlags;        
typedef int ImGuiInputTextFlags;    
typedef int ImGuiItemFlags;         
typedef int ImGuiKeyChord;          
typedef int ImGuiListClipperFlags;  
typedef int ImGuiPopupFlags;        
typedef int ImGuiMultiSelectFlags;  
typedef int ImGuiSelectableFlags;   
typedef int ImGuiSliderFlags;       
typedef int ImGuiTabBarFlags;       
typedef int ImGuiTabItemFlags;      
typedef int ImGuiTableFlags;        
typedef int ImGuiTableColumnFlags;  
typedef int ImGuiTableRowFlags;     
typedef int ImGuiTreeNodeFlags;     
typedef int ImGuiViewportFlags;     
typedef int ImGuiWindowFlags;       
typedef unsigned int ImWchar32;     
typedef unsigned short ImWchar16;   
typedef ImWchar16 ImWchar;
typedef ImS64 ImGuiSelectionUserData;
typedef int     (*ImGuiInputTextCallback)(ImGuiInputTextCallbackData* data);    
typedef void    (*ImGuiSizeCallback)(ImGuiSizeCallbackData* data);              
typedef void*   (*ImGuiMemAllocFunc)(size_t sz, void* user_data);               
typedef void    (*ImGuiMemFreeFunc)(void* ptr, void* user_data);                
struct ImVec2
{
    float x, y;
     constexpr inline ImVec2()                    : x(0.0f), y(0.0f) { }
     constexpr inline ImVec2(float _x, float _y)  : x(_x), y(_y) { }
    float& operator[] (size_t idx)                              { ((void)( (!!(idx == 0 || idx == 1)) || (_wassert(L"idx == 0 || idx == 1", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(316)), 0)) ); return ((float*)(void*)(char*)this)[idx]; } 
    float  operator[] (size_t idx) const                        { ((void)( (!!(idx == 0 || idx == 1)) || (_wassert(L"idx == 0 || idx == 1", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(317)), 0)) ); return ((const float*)(const void*)(const char*)this)[idx]; }
};
struct ImVec4
{
    float x, y, z, w;
     constexpr inline ImVec4()                                        : x(0.0f), y(0.0f), z(0.0f), w(0.0f) { }
     constexpr inline ImVec4(float _x, float _y, float _z, float _w)  : x(_x), y(_y), z(_z), w(_w) { }
};
typedef ImU64 ImTextureID;      
struct ImTextureRef
{
    ImTextureRef()                          { _TexData = ((void *)0); _TexID = ((ImTextureID)0); }
    ImTextureRef(ImTextureID tex_id)        { _TexData = ((void *)0); _TexID = tex_id; }
    inline ImTextureID  GetTexID() const;   
    ImTextureData*      _TexData;           
    ImTextureID         _TexID;             
};
typedef long ImHRESULT;             
struct ImGUID;                      
struct ImTextDesc;
struct ImTextLayout;
struct ImTextMetrics;
struct ImTextTransform;
typedef int ImTextLayoutFlags;      
typedef int ImTextRenderFlags;      
typedef int ImTextMoveFlags;        
typedef ImHRESULT (*ImTextLayoutFn)(ImFont* font, const ImTextDesc* desc, const char* text, const char* text_end, ImTextLayout** out_layout);
typedef void (*ImFontMetricsFn)(ImFont* font, float size, float density, ImTextMetrics* out_metrics);
namespace ImGui
{
     void          SetTextCallbacks(ImTextLayoutFn layout, ImFontMetricsFn metrics);
     ImTextMetrics GetFontMetrics();
     ImTextureData* GetShapeTexture();
     void          SetShapeTextureSize(int width, int height);
     ImU64         TextLayout(ImTextLayout* layout, ImGuiID id = 0);
     void          AddTextEx(ImDrawList* draw_list, ImFont* font, const ImTextDesc* desc, const ImVec2& pos, ImU32 col, const char* text_begin, const char* text_end = ((void *)0), const ImVec4* clip_rect = ((void *)0), ImTextRenderFlags render_flags = 0, const ImTextTransform* transform = ((void *)0));
     void          AddTextLayout(ImDrawList* draw_list, ImTextLayout* layout, const ImVec2& pos, ImU32 col, const ImVec4* clip_rect = ((void *)0), ImTextRenderFlags render_flags = 0, const ImTextTransform* transform = ((void *)0));
     bool          BeginTextTexture(ImDrawList* draw_list, ImTextureRef tex_ref);
     void          EndTextTexture(ImDrawList* draw_list, bool pushed);
}
enum ImTextLayoutFlags_
{
    ImTextLayoutFlags_None              = 0,
    ImTextLayoutFlags_WrapKeepBlanks    = 1 << 1,
    ImTextLayoutFlags_StopOnNewLine     = 1 << 2,
    ImTextLayoutFlags_Ellipsis          = 1 << 3,
    ImTextLayoutFlags_PasswordMask      = 1 << 4,
};
enum ImTextRenderFlags_
{
    ImTextRenderFlags_None              = 0,
    ImTextRenderFlags_CpuFineClip       = 1 << 0,
    ImTextRenderFlags_NoPixelSnap       = 1 << 1,
    ImTextRenderFlags_CompleteGlyphs    = 1 << 2,   
};
struct ImTextTransform
{
    ImVec2      AxisX;
    ImVec2      AxisY;
};
struct ImTextDesc
{
    const char* Locale;             
    float       Size;               
    float       Density;            
    float       LineHeight;         
    float       WrapWidth;          
    float       MaxWidth;           
    ImTextLayoutFlags Flags;
    ImWchar32   MaskChar;           
};
struct ImTextMetrics
{
    float       Ascent;             
    float       Descent;            
    float       LineHeight;         
    float       UnderlinePosition;  
    float       UnderlineThickness;
};
struct ImTextLine
{
    int         TextBegin;          
    int         TextEnd;            
    int         TextNext;           
    float       Baseline;           
    ImVec2      Pos;                
    ImVec2      Size;
};
struct ImTextCaret
{
    ImU64       UserData;           
    ImVec2      Pos;                
    float       Length;             
    float       InlinePos;          
    int         TextOffset;
    int         LineIndex;          
    int         RunIndex;           
    int         ObjectIndex;        
    bool        PreviousLine;       
    bool        Inside;             
};
enum ImTextMoveFlags_
{
    ImTextMoveFlags_InlineKeep      = 0,           
    ImTextMoveFlags_InlineBegin     = 1 << 0,      
    ImTextMoveFlags_InlineEnd       = 2 << 0,      
    ImTextMoveFlags_InlineMask_     = 3 << 0,
    ImTextMoveFlags_BlockRelative   = 0,           
    ImTextMoveFlags_BlockFirst      = 1 << 2,      
    ImTextMoveFlags_BlockLast       = 2 << 2,      
    ImTextMoveFlags_BlockMask_      = 3 << 2,
    ImTextMoveFlags_Codepoint       = 0,
    ImTextMoveFlags_Grapheme        = 1 << 4,
    ImTextMoveFlags_WordStart       = 2 << 4,
    ImTextMoveFlags_WordEnd         = 3 << 4,
    ImTextMoveFlags_UnitMask_       = 3 << 4,
    ImTextMoveFlags_BlockClampKeepInline = 1 << 6, 
    ImTextMoveFlags_DxWithinLine    = 1 << 7,      
    ImTextMoveFlags_Begin           = ImTextMoveFlags_InlineBegin | ImTextMoveFlags_BlockFirst,
    ImTextMoveFlags_End             = ImTextMoveFlags_InlineEnd | ImTextMoveFlags_BlockLast,
};
struct ImTextLayoutVtbl
{
    ImHRESULT       (*QueryInterface)(ImTextLayout* self, const ImGUID* iid, void** out_object);
    unsigned long   (*AddRef)(ImTextLayout* self);
    unsigned long   (*Release)(ImTextLayout* self);
    void            (*GetBoundingBox)(ImTextLayout* self, ImVec4* out_layout, ImVec4* out_ink);    
    int             (*GetTextLength)(ImTextLayout* self);
    int             (*GetEllipsisOffset)(ImTextLayout* self);                                       
    int             (*GetLines)(ImTextLayout* self, const ImTextLine** out_lines);                  
    void            (*GetCaret)(ImTextLayout* self, int text_offset, bool prefer_previous_line, ImTextCaret* out_caret); 
    void            (*HitTest)(ImTextLayout* self, ImVec2 point, ImTextCaret* out_caret);
    void            (*Move)(ImTextLayout* self, const ImTextCaret* from, ImTextMoveFlags flags, int dx, int dy, float preferred_inline_pos, ImTextCaret* out_caret); 
    int             (*GetRangeRects)(ImTextLayout* self, int text_begin, int text_end, ImVec4* out_rects, int capacity); 
    void            (*Render)(ImTextLayout* self, ImDrawList* draw_list, ImVec2 pos, const ImTextTransform* transform, ImU32 col, const ImVec4* clip_rect, ImTextRenderFlags flags);
    void            (*RenderRange)(ImTextLayout* self, ImDrawList* draw_list, ImVec2 pos, const ImTextTransform* transform, ImU32 col, const ImVec4* clip_rect, ImTextRenderFlags flags, int text_begin, int text_end);
    int             (*GetRunCount)(ImTextLayout* self);
    int             (*GetRunRects)(ImTextLayout* self, int run_index, const ImVec4** out_rects);   
};
struct ImTextLayout { const ImTextLayoutVtbl* lpVtbl; };
namespace ImGui
{
     ImGuiContext* CreateContext(ImFontAtlas* shared_font_atlas = ((void *)0));
     void          DestroyContext(ImGuiContext* ctx = ((void *)0));   
     ImGuiContext* GetCurrentContext();
     void          SetCurrentContext(ImGuiContext* ctx);
     ImGuiIO&      GetIO();                                    
     ImGuiPlatformIO& GetPlatformIO();                         
     ImGuiStyle&   GetStyle();                                 
     void          NewFrame();                                 
     void          EndFrame();                                 
     void          Render();                                   
     ImDrawData*   GetDrawData();                              
     void          ShowDemoWindow(bool* p_open = ((void *)0));        
     void          ShowMetricsWindow(bool* p_open = ((void *)0));     
     void          ShowDebugLogWindow(bool* p_open = ((void *)0));    
     void          ShowIDStackToolWindow(bool* p_open = ((void *)0)); 
     void          ShowAboutWindow(bool* p_open = ((void *)0));       
     void          ShowStyleEditor(ImGuiStyle* ref = ((void *)0));    
     bool          ShowStyleSelector(const char* label);       
     void          ShowUserGuide();                            
     const char*   GetVersion();                               
     void          StyleColorsDark(ImGuiStyle* dst = ((void *)0));    
     void          StyleColorsLight(ImGuiStyle* dst = ((void *)0));   
     void          StyleColorsClassic(ImGuiStyle* dst = ((void *)0)); 
     bool          Begin(const char* name, bool* p_open = ((void *)0), ImGuiWindowFlags flags = 0);
     void          End();
     bool          BeginChild(const char* str_id, const ImVec2& size = ImVec2(0, 0), ImGuiChildFlags child_flags = 0, ImGuiWindowFlags window_flags = 0);
     bool          BeginChild(ImGuiID id, const ImVec2& size = ImVec2(0, 0), ImGuiChildFlags child_flags = 0, ImGuiWindowFlags window_flags = 0);
     void          EndChild();
     bool          IsWindowAppearing();
     bool          IsWindowCollapsed();
     bool          IsWindowFocused(ImGuiFocusedFlags flags=0); 
     bool          IsWindowHovered(ImGuiHoveredFlags flags=0); 
     ImDrawList*   GetWindowDrawList();                        
     float         GetWindowDpiScale();                        
     ImVec2        GetWindowPos();                             
     ImVec2        GetWindowSize();                            
     float         GetWindowWidth();                           
     float         GetWindowHeight();                          
     ImGuiViewport*GetWindowViewport();                        
     void          SetNextWindowPos(const ImVec2& pos, ImGuiCond cond = 0, const ImVec2& pivot = ImVec2(0, 0)); 
     void          SetNextWindowSize(const ImVec2& size, ImGuiCond cond = 0);                  
     void          SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback = ((void *)0), void* custom_callback_data = ((void *)0)); 
     void          SetNextWindowContentSize(const ImVec2& size);                               
     void          SetNextWindowCollapsed(bool collapsed, ImGuiCond cond = 0);                 
     void          SetNextWindowFocus();                                                       
     void          SetNextWindowScroll(const ImVec2& scroll);                                  
     void          SetNextWindowBgAlpha(float alpha);                                          
     void          SetNextWindowViewport(ImGuiID viewport_id);                                 
     void          SetWindowPos(const ImVec2& pos, ImGuiCond cond = 0);                        
     void          SetWindowSize(const ImVec2& size, ImGuiCond cond = 0);                      
     void          SetWindowCollapsed(bool collapsed, ImGuiCond cond = 0);                     
     void          SetWindowFocus();                                                           
     void          SetWindowPos(const char* name, const ImVec2& pos, ImGuiCond cond = 0);      
     void          SetWindowSize(const char* name, const ImVec2& size, ImGuiCond cond = 0);    
     void          SetWindowCollapsed(const char* name, bool collapsed, ImGuiCond cond = 0);   
     void          SetWindowFocus(const char* name);                                           
     float         GetScrollX();                                                   
     float         GetScrollY();                                                   
     void          SetScrollX(float scroll_x);                                     
     void          SetScrollY(float scroll_y);                                     
     float         GetScrollMaxX();                                                
     float         GetScrollMaxY();                                                
     void          SetScrollHereX(float center_x_ratio = 0.5f);                    
     void          SetScrollHereY(float center_y_ratio = 0.5f);                    
     void          SetScrollFromPosX(float local_x, float center_x_ratio = 0.5f);  
     void          SetScrollFromPosY(float local_y, float center_y_ratio = 0.5f);  
     void          PushFont(ImFont* font, float font_size_base_unscaled);          
     void          PopFont();
     ImFont*       GetFont();                                                      
     float         GetFontSize();                                                  
     void          PushStyleColor(ImGuiCol idx, ImU32 col);                        
     void          PushStyleColor(ImGuiCol idx, const ImVec4& col);
     void          PopStyleColor(int count = 1);
     void          PushStyleVar(ImGuiStyleVar idx, float val);                     
     void          PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);             
     void          PushStyleVarX(ImGuiStyleVar idx, float val_x);                  
     void          PushStyleVarY(ImGuiStyleVar idx, float val_y);                  
     void          PopStyleVar(int count = 1);
     void          PushItemFlag(ImGuiItemFlags option, bool enabled);              
     void          PopItemFlag();
     void          PushItemWidth(float item_width);                                
     void          PopItemWidth();
     void          SetNextItemWidth(float item_width);                             
     float         CalcItemWidth();                                                
     void          PushTextWrapPos(float wrap_local_pos_x = 0.0f);                 
     void          PopTextWrapPos();
     ImVec2        GetFontTexUvWhitePixel();                                       
     ImU32         GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f);              
     ImU32         GetColorU32(const ImVec4& col);                                 
     ImU32         GetColorU32(ImU32 col, float alpha_mul = 1.0f);                 
     const ImVec4& GetStyleColorVec4(ImGuiCol idx);                                
     ImVec2        GetCursorScreenPos();                                           
     void          SetCursorScreenPos(const ImVec2& pos);                          
     ImVec2        GetContentRegionAvail();                                        
     ImVec2        GetCursorPos();                                                 
     float         GetCursorPosX();                                                
     float         GetCursorPosY();                                                
     void          SetCursorPos(const ImVec2& local_pos);                          
     void          SetCursorPosX(float local_x);                                   
     void          SetCursorPosY(float local_y);                                   
     ImVec2        GetCursorStartPos();                                            
     void          Separator();                                                    
     void          SameLine(float offset_from_start_x=0.0f, float spacing=-1.0f);  
     void          NewLine();                                                      
     void          Spacing();                                                      
     void          Dummy(const ImVec2& size);                                      
     void          Indent(float indent_w = 0.0f);                                  
     void          Unindent(float indent_w = 0.0f);                                
     void          BeginGroup();                                                   
     void          EndGroup();                                                     
     void          AlignTextToFramePadding();                                      
     float         GetTextLineHeight();                                            
     float         GetTextLineHeightWithSpacing();                                 
     float         GetFrameHeight();                                               
     float         GetFrameHeightWithSpacing();                                    
     void          PushID(const char* str_id);                                     
     void          PushID(const char* str_id_begin, const char* str_id_end);       
     void          PushID(const void* ptr_id);                                     
     void          PushID(int int_id);                                             
     void          PopID();                                                        
     ImGuiID       GetID(const char* str_id);                                      
     ImGuiID       GetID(const char* str_id_begin, const char* str_id_end);
     ImGuiID       GetID(const void* ptr_id);
     ImGuiID       GetID(int int_id);
     void          TextUnformatted(const char* text, const char* text_end = ((void *)0)); 
     void          Text(const char* fmt, ...)                                      ; 
     void          TextV(const char* fmt, va_list args)                            ;
     void          TextColored(const ImVec4& col, const char* fmt, ...)            ; 
     void          TextColoredV(const ImVec4& col, const char* fmt, va_list args)  ;
     void          TextDisabled(const char* fmt, ...)                              ; 
     void          TextDisabledV(const char* fmt, va_list args)                    ;
     void          TextWrapped(const char* fmt, ...)                               ; 
     void          TextWrappedV(const char* fmt, va_list args)                     ;
     void          LabelText(const char* label, const char* fmt, ...)              ; 
     void          LabelTextV(const char* label, const char* fmt, va_list args)    ;
     void          BulletText(const char* fmt, ...)                                ; 
     void          BulletTextV(const char* fmt, va_list args)                      ;
     void          SeparatorText(const char* label);                               
     bool          Button(const char* label, const ImVec2& size = ImVec2(0, 0));   
     bool          SmallButton(const char* label);                                 
     bool          InvisibleButton(const char* str_id, const ImVec2& size, ImGuiButtonFlags flags = 0); 
     bool          ArrowButton(const char* str_id, ImGuiDir dir);                  
     bool          Checkbox(const char* label, bool* v);
     bool          CheckboxFlags(const char* label, int* flags, int flags_value);
     bool          CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value);
     bool          RadioButton(const char* label, bool active);                    
     bool          RadioButton(const char* label, int* v, int v_button);           
     void          ProgressBar(float fraction, const ImVec2& size_arg = ImVec2(-1.175494351e-38F, 0), const char* overlay = ((void *)0));
     void          Bullet();                                                       
     bool          TextLink(const char* label);                                    
     bool          TextLinkOpenURL(const char* label, const char* url = ((void *)0));     
     void          Image(ImTextureRef tex_ref, const ImVec2& image_size, const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1, 1));
     void          ImageWithBg(ImTextureRef tex_ref, const ImVec2& image_size, const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1, 1), const ImVec4& bg_col = ImVec4(0, 0, 0, 0), const ImVec4& tint_col = ImVec4(1, 1, 1, 1));
     bool          ImageButton(const char* str_id, ImTextureRef tex_ref, const ImVec2& image_size, const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1, 1), const ImVec4& bg_col = ImVec4(0, 0, 0, 0), const ImVec4& tint_col = ImVec4(1, 1, 1, 1));
     bool          BeginCombo(const char* label, const char* preview_value, ImGuiComboFlags flags = 0);
     void          EndCombo(); 
     bool          Combo(const char* label, int* current_item, const char* const items[], int items_count, int popup_max_height_in_items = -1);
     bool          Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int popup_max_height_in_items = -1);      
     bool          Combo(const char* label, int* current_item, const char* (*getter)(void* user_data, int idx), void* user_data, int items_count, int popup_max_height_in_items = -1);
     bool          DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);     
     bool          DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", const char* format_max = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);  
     bool          DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", const char* format_max = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          DragScalar(const char* label, ImGuiDataType data_type, void* p_data, float v_speed = 1.0f, const void* p_min = ((void *)0), const void* p_max = ((void *)0), const char* format = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          DragScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, float v_speed = 1.0f, const void* p_min = ((void *)0), const void* p_max = ((void *)0), const char* format = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          SliderFloat(const char* label, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);     
     bool          SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f, const char* format = "%.0f deg", ImGuiSliderFlags flags = 0);
     bool          SliderInt(const char* label, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          SliderScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_min, const void* p_max, const char* format = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);
     bool          VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);
     bool          VSliderScalar(const char* label, const ImVec2& size, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = ((void *)0), ImGuiSliderFlags flags = 0);
     bool          InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = ((void *)0), void* user_data = ((void *)0));
     bool          InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2(0, 0), ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = ((void *)0), void* user_data = ((void *)0));
     bool          InputTextWithHint(const char* label, const char* hint, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = ((void *)0), void* user_data = ((void *)0));
     bool          InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, const char* format = "%.3f", ImGuiInputTextFlags flags = 0);
     bool          InputFloat2(const char* label, float v[2], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);
     bool          InputFloat3(const char* label, float v[3], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);
     bool          InputFloat4(const char* label, float v[4], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);
     bool          InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags flags = 0);
     bool          InputInt2(const char* label, int v[2], ImGuiInputTextFlags flags = 0);
     bool          InputInt3(const char* label, int v[3], ImGuiInputTextFlags flags = 0);
     bool          InputInt4(const char* label, int v[4], ImGuiInputTextFlags flags = 0);
     bool          InputDouble(const char* label, double* v, double step = 0.0, double step_fast = 0.0, const char* format = "%.6f", ImGuiInputTextFlags flags = 0);
     bool          InputScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_step = ((void *)0), const void* p_step_fast = ((void *)0), const char* format = ((void *)0), ImGuiInputTextFlags flags = 0);
     bool          InputScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_step = ((void *)0), const void* p_step_fast = ((void *)0), const char* format = ((void *)0), ImGuiInputTextFlags flags = 0);
     bool          ColorEdit3(const char* label, float col[3], ImGuiColorEditFlags flags = 0);
     bool          ColorEdit4(const char* label, float col[4], ImGuiColorEditFlags flags = 0);
     bool          ColorPicker3(const char* label, float col[3], ImGuiColorEditFlags flags = 0);
     bool          ColorPicker4(const char* label, float col[4], ImGuiColorEditFlags flags = 0, const float* ref_col = ((void *)0));
     bool          ColorButton(const char* desc_id, const ImVec4& col, ImGuiColorEditFlags flags = 0, const ImVec2& size = ImVec2(0, 0)); 
     bool          TreeNode(const char* label);
     bool          TreeNode(const char* str_id, const char* fmt, ...) ;   
     bool          TreeNode(const void* ptr_id, const char* fmt, ...) ;   
     bool          TreeNodeV(const char* str_id, const char* fmt, va_list args) ;
     bool          TreeNodeV(const void* ptr_id, const char* fmt, va_list args) ;
     bool          TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags = 0);
     bool          TreeNodeEx(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) ;
     bool          TreeNodeEx(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) ;
     bool          TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) ;
     bool          TreeNodeExV(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) ;
     void          TreePush(const char* str_id);                                       
     void          TreePush(const void* ptr_id);                                       
     void          TreePop();                                                          
     float         GetTreeNodeToLabelSpacing();                                        
     bool          CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags = 0);  
     bool          CollapsingHeader(const char* label, bool* p_visible, ImGuiTreeNodeFlags flags = 0); 
     void          SetNextItemOpen(bool is_open, ImGuiCond cond = 0);                  
     void          SetNextItemStorageID(ImGuiID storage_id);                           
     bool          TreeNodeGetOpen(ImGuiID storage_id, ImGuiTreeNodeFlags flags = 0);  
     bool          Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0, 0)); 
     bool          Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0, 0));      
     ImGuiMultiSelectIO*   BeginMultiSelect(ImGuiMultiSelectFlags flags, int selection_size = -1, int items_count = -1);
     ImGuiMultiSelectIO*   EndMultiSelect();
     void                  SetNextItemSelectionUserData(ImGuiSelectionUserData selection_user_data);
     bool                  IsItemToggledSelection();                                   
     bool          BeginListBox(const char* label, const ImVec2& size = ImVec2(0, 0)); 
     void          EndListBox();                                                       
     bool          ListBox(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items = -1);
     bool          ListBox(const char* label, int* current_item, const char* (*getter)(void* user_data, int idx), void* user_data, int items_count, int height_in_items = -1);
     void          PlotLines(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = ((void *)0), float scale_min = 3.402823466e+38F, float scale_max = 3.402823466e+38F, ImVec2 graph_size = ImVec2(0, 0), int stride = sizeof(float));
     void          PlotLines(const char* label, float(*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = ((void *)0), float scale_min = 3.402823466e+38F, float scale_max = 3.402823466e+38F, ImVec2 graph_size = ImVec2(0, 0));
     void          PlotHistogram(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = ((void *)0), float scale_min = 3.402823466e+38F, float scale_max = 3.402823466e+38F, ImVec2 graph_size = ImVec2(0, 0), int stride = sizeof(float));
     void          PlotHistogram(const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = ((void *)0), float scale_min = 3.402823466e+38F, float scale_max = 3.402823466e+38F, ImVec2 graph_size = ImVec2(0, 0));
     void          Value(const char* prefix, bool b);
     void          Value(const char* prefix, int v);
     void          Value(const char* prefix, unsigned int v);
     void          Value(const char* prefix, float v, const char* float_format = ((void *)0));
     bool          BeginMenuBar();                                                     
     void          EndMenuBar();                                                       
     bool          BeginMainMenuBar();                                                 
     void          EndMainMenuBar();                                                   
     bool          BeginMenu(const char* label, bool enabled = true);                  
     void          EndMenu();                                                          
     bool          MenuItem(const char* label, const char* shortcut = ((void *)0), bool selected = false, bool enabled = true);  
     bool          MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled = true);              
     bool          BeginTooltip();                                                     
     void          EndTooltip();                                                       
     void          SetTooltip(const char* fmt, ...) ;                     
     void          SetTooltipV(const char* fmt, va_list args) ;
     bool          BeginItemTooltip();                                                 
     void          SetItemTooltip(const char* fmt, ...) ;                 
     void          SetItemTooltipV(const char* fmt, va_list args) ;
     bool          BeginPopup(const char* str_id, ImGuiWindowFlags flags = 0);                         
     bool          BeginPopupModal(const char* name, bool* p_open = ((void *)0), ImGuiWindowFlags flags = 0); 
     void          EndPopup();                                                                         
     bool          OpenPopup(const char* str_id, ImGuiPopupFlags popup_flags = 0);                     
     bool          OpenPopup(ImGuiID id, ImGuiPopupFlags popup_flags = 0);                             
     bool          OpenPopupOnItemClick(const char* str_id = ((void *)0), ImGuiPopupFlags popup_flags = 0);   
     void          CloseCurrentPopup();                                                                
     bool          BeginPopupContextItem(const char* str_id = ((void *)0), ImGuiPopupFlags popup_flags = 0);  
     bool          BeginPopupContextWindow(const char* str_id = ((void *)0), ImGuiPopupFlags popup_flags = 0);
     bool          BeginPopupContextVoid(const char* str_id = ((void *)0), ImGuiPopupFlags popup_flags = 0);  
     bool          IsPopupOpen(const char* str_id, ImGuiPopupFlags flags = 0);                         
     bool          BeginTable(const char* str_id, int columns, ImGuiTableFlags flags = 0, const ImVec2& outer_size = ImVec2(0.0f, 0.0f), float inner_width = 0.0f);
     void          EndTable();                                         
     void          TableNextRow(ImGuiTableRowFlags row_flags = 0, float min_row_height = 0.0f); 
     bool          TableNextColumn();                                  
     bool          TableSetColumnIndex(int column_n);                  
     void          TableSetupColumn(const char* label, ImGuiTableColumnFlags flags = 0, float init_width_or_weight = 0.0f, ImGuiID user_data = 0);
     void          TableSetupScrollFreeze(int cols, int rows);         
     void          TableHeader(const char* label);                     
     void          TableHeadersRow();                                  
     void          TableAngledHeadersRow();                            
     ImGuiTableSortSpecs*  TableGetSortSpecs();                        
     int                   TableGetColumnCount();                      
     int                   TableGetColumnIndex();                      
     int                   TableGetRowIndex();                         
     const char*           TableGetColumnName(int column_n = -1);      
     ImGuiTableColumnFlags TableGetColumnFlags(int column_n = -1);     
     void                  TableSetColumnEnabled(int column_n, bool v);
     int                   TableGetHoveredColumn();                    
     void                  TableSetBgColor(ImGuiTableBgTarget target, ImU32 color, int column_n = -1);  
     void          Columns(int count = 1, const char* id = ((void *)0), bool borders = true);
     void          NextColumn();                                                       
     int           GetColumnIndex();                                                   
     float         GetColumnWidth(int column_index = -1);                              
     void          SetColumnWidth(int column_index, float width);                      
     float         GetColumnOffset(int column_index = -1);                             
     void          SetColumnOffset(int column_index, float offset_x);                  
     int           GetColumnsCount();
     bool          BeginTabBar(const char* str_id, ImGuiTabBarFlags flags = 0);        
     void          EndTabBar();                                                        
     bool          BeginTabItem(const char* label, bool* p_open = ((void *)0), ImGuiTabItemFlags flags = 0); 
     void          EndTabItem();                                                       
     bool          TabItemButton(const char* label, ImGuiTabItemFlags flags = 0);      
     void          SetTabItemClosed(const char* tab_or_docked_window_label);           
     ImGuiID       DockSpace(ImGuiID dockspace_id, const ImVec2& size = ImVec2(0, 0), ImGuiDockNodeFlags flags = 0, const ImGuiWindowClass* window_class = ((void *)0));
     ImGuiID       DockSpaceOverViewport(ImGuiID dockspace_id = 0, const ImGuiViewport* viewport = ((void *)0), ImGuiDockNodeFlags flags = 0, const ImGuiWindowClass* window_class = ((void *)0));
     void          SetNextWindowDockID(ImGuiID dock_id, ImGuiCond cond = 0);           
     void          SetNextWindowClass(const ImGuiWindowClass* window_class);           
     ImGuiID       GetWindowDockID();                                                  
     bool          IsWindowDocked();                                                   
     void          LogToTTY(int auto_open_depth = -1);                                 
     void          LogToFile(int auto_open_depth = -1, const char* filename = ((void *)0));   
     void          LogToClipboard(int auto_open_depth = -1);                           
     void          LogFinish();                                                        
     void          LogButtons();                                                       
     void          LogText(const char* fmt, ...) ;                        
     void          LogTextV(const char* fmt, va_list args) ;
     bool          BeginDragDropSource(ImGuiDragDropFlags flags = 0);                                      
     bool          SetDragDropPayload(const char* type, const void* data, size_t sz, ImGuiCond cond = 0);  
     void          EndDragDropSource();                                                                    
     bool                  BeginDragDropTarget();                                                          
     const ImGuiPayload*   AcceptDragDropPayload(const char* type, ImGuiDragDropFlags flags = 0);          
     void                  EndDragDropTarget();                                                            
     const ImGuiPayload*   GetDragDropPayload();                                                           
     void          BeginDisabled(bool disabled = true);
     void          EndDisabled();
     void          PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect);
     void          PopClipRect();
     void          SetItemDefaultFocus();                                              
     void          SetKeyboardFocusHere(int offset = 0);                               
     void          SetNavCursorVisible(bool visible);                                  
     void          SetNextItemAllowOverlap();                                          
     bool          IsItemHovered(ImGuiHoveredFlags flags = 0);                         
     bool          IsItemActive();                                                     
     bool          IsItemFocused();                                                    
     bool          IsItemClicked(ImGuiMouseButton mouse_button = 0);                   
     bool          IsItemVisible();                                                    
     bool          IsItemEdited();                                                     
     bool          IsItemActivated();                                                  
     bool          IsItemDeactivated();                                                
     bool          IsItemDeactivatedAfterEdit();                                       
     bool          IsItemToggledOpen();                                                
     bool          IsAnyItemHovered();                                                 
     bool          IsAnyItemActive();                                                  
     bool          IsAnyItemFocused();                                                 
     ImGuiID       GetItemID();                                                        
     ImVec2        GetItemRectMin();                                                   
     ImVec2        GetItemRectMax();                                                   
     ImVec2        GetItemRectSize();                                                  
     ImGuiItemFlags GetItemFlags();                                                    
     int           GetItemClickedCountWithSingleClickDelay(ImGuiMouseButton mouse_button = 0, float delay = -1.0f); 
     ImGuiViewport* GetMainViewport();                                                 
     ImDrawList*   GetBackgroundDrawList(ImGuiViewport* viewport = ((void *)0));              
     ImDrawList*   GetForegroundDrawList(ImGuiViewport* viewport = ((void *)0));              
     bool          IsRectVisible(const ImVec2& size);                                  
     bool          IsRectVisible(const ImVec2& rect_min, const ImVec2& rect_max);      
     double        GetTime();                                                          
     int           GetFrameCount();                                                    
     ImDrawListSharedData* GetDrawListSharedData();                                    
     const char*   GetStyleColorName(ImGuiCol idx);                                    
     void          SetStateStorage(ImGuiStorage* storage);                             
     ImGuiStorage* GetStateStorage();
     ImVec2        CalcTextSize(const char* text, const char* text_end = ((void *)0), bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
     ImVec4        ColorConvertU32ToFloat4(ImU32 in);
     ImU32         ColorConvertFloat4ToU32(const ImVec4& in);
     void          ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v);
     void          ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b);
     bool          IsKeyDown(ImGuiKey key);                                            
     bool          IsKeyPressed(ImGuiKey key, bool repeat = true);                     
     bool          IsKeyReleased(ImGuiKey key);                                        
     bool          IsKeyChordPressed(ImGuiKeyChord key_chord);                         
     int           GetKeyPressedAmount(ImGuiKey key, float repeat_delay, float rate);  
     const char*   GetKeyName(ImGuiKey key);                                           
     void          SetNextFrameWantCaptureKeyboard(bool want_capture_keyboard);        
     bool          Shortcut(ImGuiKeyChord key_chord, ImGuiInputFlags flags = 0);
     void          SetNextItemShortcut(ImGuiKeyChord key_chord, ImGuiInputFlags flags = 0);
     bool          SetItemKeyOwner(ImGuiKey key);                                      
     bool          IsMouseDown(ImGuiMouseButton button);                               
     bool          IsMouseClicked(ImGuiMouseButton button, bool repeat = false);       
     bool          IsMouseReleased(ImGuiMouseButton button);                           
     bool          IsMouseDoubleClicked(ImGuiMouseButton button);                      
     bool          IsMouseReleasedWithDelay(ImGuiMouseButton button, float delay=-1.f);
     int           GetMouseClickedCount(ImGuiMouseButton button);                      
     bool          IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip = true);
     bool          IsMousePosValid(const ImVec2* mouse_pos = ((void *)0));                    
     bool          IsAnyMouseDown();                                                   
     ImVec2        GetMousePos();                                                      
     ImVec2        GetMousePosOnOpeningCurrentPopup();                                 
     bool          IsMouseDragging(ImGuiMouseButton button, float lock_threshold = -1.0f);         
     ImVec2        GetMouseDragDelta(ImGuiMouseButton button = 0, float lock_threshold = -1.0f);   
     void          ResetMouseDragDelta(ImGuiMouseButton button = 0);                   
     ImGuiMouseCursor GetMouseCursor();                                                
     void          SetMouseCursor(ImGuiMouseCursor cursor_type);                       
     void          SetNextFrameWantCaptureMouse(bool want_capture_mouse);              
     const char*   GetClipboardText();
     void          SetClipboardText(const char* text);
     void          LoadIniSettingsFromDisk(const char* ini_filename);                  
     void          LoadIniSettingsFromMemory(const char* ini_data, size_t ini_size=0); 
     void          SaveIniSettingsToDisk(const char* ini_filename);                    
     const char*   SaveIniSettingsToMemory(size_t* out_ini_size = ((void *)0));               
     void          DebugTextEncoding(const char* text);
     void          DebugFlashStyleColor(ImGuiCol idx);
     void          DebugStartItemPicker();
     bool          DebugCheckVersionAndDataLayout(const char* version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx); 
     void          DebugLog(const char* fmt, ...)           ; 
     void          DebugLogV(const char* fmt, va_list args) ;
     void          SetAllocatorFunctions(ImGuiMemAllocFunc alloc_func, ImGuiMemFreeFunc free_func, void* user_data = ((void *)0));
     void          GetAllocatorFunctions(ImGuiMemAllocFunc* p_alloc_func, ImGuiMemFreeFunc* p_free_func, void** p_user_data);
     void*         MemAlloc(size_t size);
     void          MemFree(void* ptr);
     void          UpdatePlatformWindows();                                
     void          RenderPlatformWindowsDefault(void* platform_render_arg = ((void *)0), void* renderer_render_arg = ((void *)0)); 
     void          DestroyPlatformWindows();                               
     ImGuiViewport* FindViewportByID(ImGuiID viewport_id);                 
     ImGuiViewport* FindViewportByPlatformHandle(void* platform_handle);   
} 
enum ImGuiWindowFlags_
{
    ImGuiWindowFlags_None                   = 0,
    ImGuiWindowFlags_NoTitleBar             = 1 << 0,   
    ImGuiWindowFlags_NoResize               = 1 << 1,   
    ImGuiWindowFlags_NoMove                 = 1 << 2,   
    ImGuiWindowFlags_NoScrollbar            = 1 << 3,   
    ImGuiWindowFlags_NoScrollWithMouse      = 1 << 4,   
    ImGuiWindowFlags_NoCollapse             = 1 << 5,   
    ImGuiWindowFlags_AlwaysAutoResize       = 1 << 6,   
    ImGuiWindowFlags_NoBackground           = 1 << 7,   
    ImGuiWindowFlags_NoSavedSettings        = 1 << 8,   
    ImGuiWindowFlags_NoMouseInputs          = 1 << 9,   
    ImGuiWindowFlags_MenuBar                = 1 << 10,  
    ImGuiWindowFlags_HorizontalScrollbar    = 1 << 11,  
    ImGuiWindowFlags_NoFocusOnAppearing     = 1 << 12,  
    ImGuiWindowFlags_NoBringToFrontOnFocus  = 1 << 13,  
    ImGuiWindowFlags_AlwaysVerticalScrollbar= 1 << 14,  
    ImGuiWindowFlags_AlwaysHorizontalScrollbar=1<< 15,  
    ImGuiWindowFlags_NoNavInputs            = 1 << 16,  
    ImGuiWindowFlags_NoNavFocus             = 1 << 17,  
    ImGuiWindowFlags_UnsavedDocument        = 1 << 18,  
    ImGuiWindowFlags_NoDocking              = 1 << 19,  
    ImGuiWindowFlags_NoNav                  = ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,
    ImGuiWindowFlags_NoDecoration           = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoCollapse,
    ImGuiWindowFlags_NoInputs               = ImGuiWindowFlags_NoMouseInputs | ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,
    ImGuiWindowFlags_DockNodeHost           = 1 << 23,  
    ImGuiWindowFlags_ChildWindow            = 1 << 24,  
    ImGuiWindowFlags_Tooltip                = 1 << 25,  
    ImGuiWindowFlags_Popup                  = 1 << 26,  
    ImGuiWindowFlags_Modal                  = 1 << 27,  
    ImGuiWindowFlags_ChildMenu              = 1 << 28,  
};
enum ImGuiChildFlags_
{
    ImGuiChildFlags_None                    = 0,
    ImGuiChildFlags_Borders                 = 1 << 0,   
    ImGuiChildFlags_AlwaysUseWindowPadding  = 1 << 1,   
    ImGuiChildFlags_ResizeX                 = 1 << 2,   
    ImGuiChildFlags_ResizeY                 = 1 << 3,   
    ImGuiChildFlags_AutoResizeX             = 1 << 4,   
    ImGuiChildFlags_AutoResizeY             = 1 << 5,   
    ImGuiChildFlags_AlwaysAutoResize        = 1 << 6,   
    ImGuiChildFlags_FrameStyle              = 1 << 7,   
    ImGuiChildFlags_NavFlattened            = 1 << 8,   
};
enum ImGuiItemFlags_
{
    ImGuiItemFlags_None                     = 0,        
    ImGuiItemFlags_NoTabStop                = 1 << 0,   
    ImGuiItemFlags_NoNav                    = 1 << 1,   
    ImGuiItemFlags_NoNavDefaultFocus        = 1 << 2,   
    ImGuiItemFlags_ButtonRepeat             = 1 << 3,   
    ImGuiItemFlags_AutoClosePopups          = 1 << 4,   
    ImGuiItemFlags_AllowDuplicateId         = 1 << 5,   
    ImGuiItemFlags_Disabled                 = 1 << 6,   
    ImGuiItemFlags_LiveEditOnInputText      = 1 << 7,   
    ImGuiItemFlags_LiveEditOnInputScalar    = 1 << 8,   
    ImGuiItemFlags_LiveEditOnInput          = ImGuiItemFlags_LiveEditOnInputText | ImGuiItemFlags_LiveEditOnInputScalar,
    ImGuiItemFlags_MixedValue               = 1 << 9,   
    ImGuiItemFlags_ParseLabelFromEnd        = 1 << 18,  
};
enum ImGuiInputTextFlags_
{
    ImGuiInputTextFlags_None                = 0,
    ImGuiInputTextFlags_CharsDecimal        = 1 << 0,   
    ImGuiInputTextFlags_CharsHexadecimal    = 1 << 1,   
    ImGuiInputTextFlags_CharsScientific     = 1 << 2,   
    ImGuiInputTextFlags_CharsUppercase      = 1 << 3,   
    ImGuiInputTextFlags_CharsNoBlank        = 1 << 4,   
    ImGuiInputTextFlags_AllowTabInput       = 1 << 5,   
    ImGuiInputTextFlags_EnterReturnsTrue    = 1 << 6,   
    ImGuiInputTextFlags_EscapeClearsAll     = 1 << 7,   
    ImGuiInputTextFlags_CtrlEnterForNewLine = 1 << 8,   
    ImGuiInputTextFlags_ReadOnly            = 1 << 9,   
    ImGuiInputTextFlags_Password            = 1 << 10,  
    ImGuiInputTextFlags_AlwaysOverwrite     = 1 << 11,  
    ImGuiInputTextFlags_AutoSelectAll       = 1 << 12,  
    ImGuiInputTextFlags_ParseEmptyRefVal    = 1 << 13,  
    ImGuiInputTextFlags_DisplayEmptyRefVal  = 1 << 14,  
    ImGuiInputTextFlags_NoHorizontalScroll  = 1 << 15,  
    ImGuiInputTextFlags_NoUndoRedo          = 1 << 16,  
    ImGuiInputTextFlags_ElideLeft           = 1 << 17,  
    ImGuiInputTextFlags_CallbackCompletion  = 1 << 18,  
    ImGuiInputTextFlags_CallbackHistory     = 1 << 19,  
    ImGuiInputTextFlags_CallbackAlways      = 1 << 20,  
    ImGuiInputTextFlags_CallbackCharFilter  = 1 << 21,  
    ImGuiInputTextFlags_CallbackResize      = 1 << 22,  
    ImGuiInputTextFlags_CallbackEdit        = 1 << 23,  
    ImGuiInputTextFlags_WordWrap            = 1 << 24,  
};
enum ImGuiTreeNodeFlags_
{
    ImGuiTreeNodeFlags_None                 = 0,
    ImGuiTreeNodeFlags_Selected             = 1 << 0,   
    ImGuiTreeNodeFlags_Framed               = 1 << 1,   
    ImGuiTreeNodeFlags_AllowOverlap         = 1 << 2,   
    ImGuiTreeNodeFlags_NoTreePushOnOpen     = 1 << 3,   
    ImGuiTreeNodeFlags_NoAutoOpenOnLog      = 1 << 4,   
    ImGuiTreeNodeFlags_DefaultOpen          = 1 << 5,   
    ImGuiTreeNodeFlags_OpenOnDoubleClick    = 1 << 6,   
    ImGuiTreeNodeFlags_OpenOnArrow          = 1 << 7,   
    ImGuiTreeNodeFlags_Leaf                 = 1 << 8,   
    ImGuiTreeNodeFlags_Bullet               = 1 << 9,   
    ImGuiTreeNodeFlags_FramePadding         = 1 << 10,  
    ImGuiTreeNodeFlags_SpanAvailWidth       = 1 << 11,  
    ImGuiTreeNodeFlags_SpanFullWidth        = 1 << 12,  
    ImGuiTreeNodeFlags_SpanLabelWidth       = 1 << 13,  
    ImGuiTreeNodeFlags_SpanAllColumns       = 1 << 14,  
    ImGuiTreeNodeFlags_LabelSpanAllColumns  = 1 << 15,  
    ImGuiTreeNodeFlags_NavLeftJumpsToParent = 1 << 17,  
    ImGuiTreeNodeFlags_CollapsingHeader     = ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_NoAutoOpenOnLog,
    ImGuiTreeNodeFlags_DrawLinesNone        = 1 << 18,  
    ImGuiTreeNodeFlags_DrawLinesFull        = 1 << 19,  
    ImGuiTreeNodeFlags_DrawLinesToNodes     = 1 << 20,  
};
enum ImGuiPopupFlags_
{
    ImGuiPopupFlags_None                    = 0,
    ImGuiPopupFlags_MouseButtonLeft         = 1 << 2,   
    ImGuiPopupFlags_MouseButtonRight        = 2 << 2,   
    ImGuiPopupFlags_MouseButtonMiddle       = 3 << 2,   
    ImGuiPopupFlags_NoReopen                = 1 << 5,   
    ImGuiPopupFlags_NoOpenOverExistingPopup = 1 << 7,   
    ImGuiPopupFlags_NoOpenOverItems         = 1 << 8,   
    ImGuiPopupFlags_AnyPopupId              = 1 << 10,  
    ImGuiPopupFlags_AnyPopupLevel           = 1 << 11,  
    ImGuiPopupFlags_AnyPopup                = ImGuiPopupFlags_AnyPopupId | ImGuiPopupFlags_AnyPopupLevel,
    ImGuiPopupFlags_MouseButtonShift_       = 2,        
    ImGuiPopupFlags_MouseButtonMask_        = 0x0C,     
    ImGuiPopupFlags_InvalidMask_            = 0x03,     
};
enum ImGuiSelectableFlags_
{
    ImGuiSelectableFlags_None               = 0,
    ImGuiSelectableFlags_NoAutoClosePopups  = 1 << 0,   
    ImGuiSelectableFlags_SpanAllColumns     = 1 << 1,   
    ImGuiSelectableFlags_AllowDoubleClick   = 1 << 2,   
    ImGuiSelectableFlags_Disabled           = 1 << 3,   
    ImGuiSelectableFlags_AllowOverlap       = 1 << 4,   
    ImGuiSelectableFlags_Highlight          = 1 << 5,   
    ImGuiSelectableFlags_SelectOnNav        = 1 << 6,   
};
enum ImGuiComboFlags_
{
    ImGuiComboFlags_None                    = 0,
    ImGuiComboFlags_PopupAlignLeft          = 1 << 0,   
    ImGuiComboFlags_HeightSmall             = 1 << 1,   
    ImGuiComboFlags_HeightRegular           = 1 << 2,   
    ImGuiComboFlags_HeightLarge             = 1 << 3,   
    ImGuiComboFlags_HeightLargest           = 1 << 4,   
    ImGuiComboFlags_NoArrowButton           = 1 << 5,   
    ImGuiComboFlags_NoPreview               = 1 << 6,   
    ImGuiComboFlags_WidthFitPreview         = 1 << 7,   
    ImGuiComboFlags_HeightMask_             = ImGuiComboFlags_HeightSmall | ImGuiComboFlags_HeightRegular | ImGuiComboFlags_HeightLarge | ImGuiComboFlags_HeightLargest,
};
enum ImGuiTabBarFlags_
{
    ImGuiTabBarFlags_None                           = 0,
    ImGuiTabBarFlags_Reorderable                    = 1 << 0,   
    ImGuiTabBarFlags_AutoSelectNewTabs              = 1 << 1,   
    ImGuiTabBarFlags_TabListPopupButton             = 1 << 2,   
    ImGuiTabBarFlags_NoCloseWithMiddleMouseButton   = 1 << 3,   
    ImGuiTabBarFlags_NoTabListScrollingButtons      = 1 << 4,   
    ImGuiTabBarFlags_NoTooltip                      = 1 << 5,   
    ImGuiTabBarFlags_DrawSelectedOverline           = 1 << 6,   
    ImGuiTabBarFlags_FittingPolicyMixed             = 1 << 7,   
    ImGuiTabBarFlags_FittingPolicyShrink            = 1 << 8,   
    ImGuiTabBarFlags_FittingPolicyScroll            = 1 << 9,   
    ImGuiTabBarFlags_FittingPolicyMask_             = ImGuiTabBarFlags_FittingPolicyMixed | ImGuiTabBarFlags_FittingPolicyShrink | ImGuiTabBarFlags_FittingPolicyScroll,
    ImGuiTabBarFlags_FittingPolicyDefault_          = ImGuiTabBarFlags_FittingPolicyMixed,
};
enum ImGuiTabItemFlags_
{
    ImGuiTabItemFlags_None                          = 0,
    ImGuiTabItemFlags_UnsavedDocument               = 1 << 0,   
    ImGuiTabItemFlags_SetSelected                   = 1 << 1,   
    ImGuiTabItemFlags_NoCloseWithMiddleMouseButton  = 1 << 2,   
    ImGuiTabItemFlags_NoPushId                      = 1 << 3,   
    ImGuiTabItemFlags_NoTooltip                     = 1 << 4,   
    ImGuiTabItemFlags_NoReorder                     = 1 << 5,   
    ImGuiTabItemFlags_Leading                       = 1 << 6,   
    ImGuiTabItemFlags_Trailing                      = 1 << 7,   
    ImGuiTabItemFlags_NoAssumedClosure              = 1 << 8,   
};
enum ImGuiFocusedFlags_
{
    ImGuiFocusedFlags_None                          = 0,
    ImGuiFocusedFlags_ChildWindows                  = 1 << 0,   
    ImGuiFocusedFlags_RootWindow                    = 1 << 1,   
    ImGuiFocusedFlags_AnyWindow                     = 1 << 2,   
    ImGuiFocusedFlags_NoPopupHierarchy              = 1 << 3,   
    ImGuiFocusedFlags_DockHierarchy                 = 1 << 4,   
    ImGuiFocusedFlags_RootAndChildWindows           = ImGuiFocusedFlags_RootWindow | ImGuiFocusedFlags_ChildWindows,
};
enum ImGuiHoveredFlags_
{
    ImGuiHoveredFlags_None                          = 0,        
    ImGuiHoveredFlags_ChildWindows                  = 1 << 0,   
    ImGuiHoveredFlags_RootWindow                    = 1 << 1,   
    ImGuiHoveredFlags_AnyWindow                     = 1 << 2,   
    ImGuiHoveredFlags_NoPopupHierarchy              = 1 << 3,   
    ImGuiHoveredFlags_DockHierarchy                 = 1 << 4,   
    ImGuiHoveredFlags_AllowWhenBlockedByPopup       = 1 << 5,   
    ImGuiHoveredFlags_AllowWhenBlockedByActiveItem  = 1 << 7,   
    ImGuiHoveredFlags_AllowWhenOverlappedByItem     = 1 << 8,   
    ImGuiHoveredFlags_AllowWhenOverlappedByWindow   = 1 << 9,   
    ImGuiHoveredFlags_AllowWhenDisabled             = 1 << 10,  
    ImGuiHoveredFlags_NoNavOverride                 = 1 << 11,  
    ImGuiHoveredFlags_AllowWhenOverlapped           = ImGuiHoveredFlags_AllowWhenOverlappedByItem | ImGuiHoveredFlags_AllowWhenOverlappedByWindow,
    ImGuiHoveredFlags_RectOnly                      = ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_AllowWhenOverlapped,
    ImGuiHoveredFlags_RootAndChildWindows           = ImGuiHoveredFlags_RootWindow | ImGuiHoveredFlags_ChildWindows,
    ImGuiHoveredFlags_ForTooltip                    = 1 << 12,  
    ImGuiHoveredFlags_Stationary                    = 1 << 13,  
    ImGuiHoveredFlags_DelayNone                     = 1 << 14,  
    ImGuiHoveredFlags_DelayShort                    = 1 << 15,  
    ImGuiHoveredFlags_DelayNormal                   = 1 << 16,  
    ImGuiHoveredFlags_NoSharedDelay                 = 1 << 17,  
};
enum ImGuiDockNodeFlags_
{
    ImGuiDockNodeFlags_None                         = 0,
    ImGuiDockNodeFlags_KeepAliveOnly                = 1 << 0,   
    ImGuiDockNodeFlags_NoDockingOverCentralNode     = 1 << 2,   
    ImGuiDockNodeFlags_PassthruCentralNode          = 1 << 3,   
    ImGuiDockNodeFlags_NoDockingSplit               = 1 << 4,   
    ImGuiDockNodeFlags_NoResize                     = 1 << 5,   
    ImGuiDockNodeFlags_AutoHideTabBar               = 1 << 6,   
    ImGuiDockNodeFlags_NoUndocking                  = 1 << 7,   
};
enum ImGuiDragDropFlags_
{
    ImGuiDragDropFlags_None                         = 0,
    ImGuiDragDropFlags_SourceNoPreviewTooltip       = 1 << 0,   
    ImGuiDragDropFlags_SourceNoDisableHover         = 1 << 1,   
    ImGuiDragDropFlags_SourceNoHoldToOpenOthers     = 1 << 2,   
    ImGuiDragDropFlags_SourceAllowNullID            = 1 << 3,   
    ImGuiDragDropFlags_SourceExtern                 = 1 << 4,   
    ImGuiDragDropFlags_PayloadAutoExpire            = 1 << 5,   
    ImGuiDragDropFlags_PayloadNoCrossContext        = 1 << 6,   
    ImGuiDragDropFlags_PayloadNoCrossProcess        = 1 << 7,   
    ImGuiDragDropFlags_AcceptBeforeDelivery         = 1 << 10,  
    ImGuiDragDropFlags_AcceptNoDrawDefaultRect      = 1 << 11,  
    ImGuiDragDropFlags_AcceptNoPreviewTooltip       = 1 << 12,  
    ImGuiDragDropFlags_AcceptDrawAsHovered          = 1 << 13,  
    ImGuiDragDropFlags_AcceptPeekOnly               = ImGuiDragDropFlags_AcceptBeforeDelivery | ImGuiDragDropFlags_AcceptNoDrawDefaultRect, 
};
enum ImGuiDataType_
{
    ImGuiDataType_S8,       
    ImGuiDataType_U8,       
    ImGuiDataType_S16,      
    ImGuiDataType_U16,      
    ImGuiDataType_S32,      
    ImGuiDataType_U32,      
    ImGuiDataType_S64,      
    ImGuiDataType_U64,      
    ImGuiDataType_Float,    
    ImGuiDataType_Double,   
    ImGuiDataType_Bool,     
    ImGuiDataType_String,   
    ImGuiDataType_COUNT
};
enum ImGuiDir : int
{
    ImGuiDir_None    = -1,
    ImGuiDir_Left    = 0,
    ImGuiDir_Right   = 1,
    ImGuiDir_Up      = 2,
    ImGuiDir_Down    = 3,
    ImGuiDir_COUNT
};
enum ImGuiSortDirection : ImU8
{
    ImGuiSortDirection_None         = 0,
    ImGuiSortDirection_Ascending    = 1,    
    ImGuiSortDirection_Descending   = 2     
};
enum ImGuiKey : int
{
    ImGuiKey_None = 0,
    ImGuiKey_NamedKey_BEGIN = 512,  
    ImGuiKey_Tab = 512,             
    ImGuiKey_LeftArrow,
    ImGuiKey_RightArrow,
    ImGuiKey_UpArrow,
    ImGuiKey_DownArrow,
    ImGuiKey_PageUp,
    ImGuiKey_PageDown,
    ImGuiKey_Home,
    ImGuiKey_End,
    ImGuiKey_Insert,
    ImGuiKey_Delete,
    ImGuiKey_Backspace,
    ImGuiKey_Space,
    ImGuiKey_Enter,
    ImGuiKey_Escape,
    ImGuiKey_LeftCtrl, ImGuiKey_LeftShift, ImGuiKey_LeftAlt, ImGuiKey_LeftSuper,     
    ImGuiKey_RightCtrl, ImGuiKey_RightShift, ImGuiKey_RightAlt, ImGuiKey_RightSuper,
    ImGuiKey_Menu,
    ImGuiKey_0, ImGuiKey_1, ImGuiKey_2, ImGuiKey_3, ImGuiKey_4, ImGuiKey_5, ImGuiKey_6, ImGuiKey_7, ImGuiKey_8, ImGuiKey_9,
    ImGuiKey_A, ImGuiKey_B, ImGuiKey_C, ImGuiKey_D, ImGuiKey_E, ImGuiKey_F, ImGuiKey_G, ImGuiKey_H, ImGuiKey_I, ImGuiKey_J,
    ImGuiKey_K, ImGuiKey_L, ImGuiKey_M, ImGuiKey_N, ImGuiKey_O, ImGuiKey_P, ImGuiKey_Q, ImGuiKey_R, ImGuiKey_S, ImGuiKey_T,
    ImGuiKey_U, ImGuiKey_V, ImGuiKey_W, ImGuiKey_X, ImGuiKey_Y, ImGuiKey_Z,
    ImGuiKey_F1, ImGuiKey_F2, ImGuiKey_F3, ImGuiKey_F4, ImGuiKey_F5, ImGuiKey_F6,
    ImGuiKey_F7, ImGuiKey_F8, ImGuiKey_F9, ImGuiKey_F10, ImGuiKey_F11, ImGuiKey_F12,
    ImGuiKey_F13, ImGuiKey_F14, ImGuiKey_F15, ImGuiKey_F16, ImGuiKey_F17, ImGuiKey_F18,
    ImGuiKey_F19, ImGuiKey_F20, ImGuiKey_F21, ImGuiKey_F22, ImGuiKey_F23, ImGuiKey_F24,
    ImGuiKey_Apostrophe,        
    ImGuiKey_Comma,             
    ImGuiKey_Minus,             
    ImGuiKey_Period,            
    ImGuiKey_Slash,             
    ImGuiKey_Semicolon,         
    ImGuiKey_Equal,             
    ImGuiKey_LeftBracket,       
    ImGuiKey_Backslash,         
    ImGuiKey_RightBracket,      
    ImGuiKey_GraveAccent,       
    ImGuiKey_CapsLock,
    ImGuiKey_ScrollLock,
    ImGuiKey_NumLock,
    ImGuiKey_PrintScreen,
    ImGuiKey_Pause,
    ImGuiKey_Keypad0, ImGuiKey_Keypad1, ImGuiKey_Keypad2, ImGuiKey_Keypad3, ImGuiKey_Keypad4,
    ImGuiKey_Keypad5, ImGuiKey_Keypad6, ImGuiKey_Keypad7, ImGuiKey_Keypad8, ImGuiKey_Keypad9,
    ImGuiKey_KeypadDecimal,
    ImGuiKey_KeypadDivide,
    ImGuiKey_KeypadMultiply,
    ImGuiKey_KeypadSubtract,
    ImGuiKey_KeypadAdd,
    ImGuiKey_KeypadEnter,
    ImGuiKey_KeypadEqual,
    ImGuiKey_AppBack,               
    ImGuiKey_AppForward,
    ImGuiKey_Oem102,                
    ImGuiKey_GamepadStart,          
    ImGuiKey_GamepadBack,           
    ImGuiKey_GamepadFaceLeft,       
    ImGuiKey_GamepadFaceRight,      
    ImGuiKey_GamepadFaceUp,         
    ImGuiKey_GamepadFaceDown,       
    ImGuiKey_GamepadDpadLeft,       
    ImGuiKey_GamepadDpadRight,      
    ImGuiKey_GamepadDpadUp,         
    ImGuiKey_GamepadDpadDown,       
    ImGuiKey_GamepadL1,             
    ImGuiKey_GamepadR1,             
    ImGuiKey_GamepadL2,             
    ImGuiKey_GamepadR2,             
    ImGuiKey_GamepadL3,             
    ImGuiKey_GamepadR3,             
    ImGuiKey_GamepadLStickLeft,     
    ImGuiKey_GamepadLStickRight,    
    ImGuiKey_GamepadLStickUp,       
    ImGuiKey_GamepadLStickDown,     
    ImGuiKey_GamepadRStickLeft,     
    ImGuiKey_GamepadRStickRight,    
    ImGuiKey_GamepadRStickUp,       
    ImGuiKey_GamepadRStickDown,     
    ImGuiKey_MouseLeft, ImGuiKey_MouseRight, ImGuiKey_MouseMiddle, ImGuiKey_MouseX1, ImGuiKey_MouseX2, ImGuiKey_MouseWheelX, ImGuiKey_MouseWheelY,
    ImGuiKey_ReservedForModCtrl, ImGuiKey_ReservedForModShift, ImGuiKey_ReservedForModAlt, ImGuiKey_ReservedForModSuper,
    ImGuiKey_NamedKey_END,
    ImGuiKey_NamedKey_COUNT = ImGuiKey_NamedKey_END - ImGuiKey_NamedKey_BEGIN,
    ImGuiMod_None                   = 0,
    ImGuiMod_Ctrl                   = 1 << 12, 
    ImGuiMod_Shift                  = 1 << 13, 
    ImGuiMod_Alt                    = 1 << 14, 
    ImGuiMod_Super                  = 1 << 15, 
    ImGuiMod_Mask_                  = 0xF000,  
};
enum ImGuiInputFlags_
{
    ImGuiInputFlags_None                    = 0,
    ImGuiInputFlags_Repeat                  = 1 << 0,   
    ImGuiInputFlags_RouteActive             = 1 << 10,  
    ImGuiInputFlags_RouteFocused            = 1 << 11,  
    ImGuiInputFlags_RouteGlobal             = 1 << 12,  
    ImGuiInputFlags_RouteAlways             = 1 << 13,  
    ImGuiInputFlags_RouteOverFocused        = 1 << 14,  
    ImGuiInputFlags_RouteOverActive         = 1 << 15,  
    ImGuiInputFlags_RouteUnlessBgFocused    = 1 << 16,  
    ImGuiInputFlags_RouteFromRootWindow     = 1 << 17,  
    ImGuiInputFlags_Tooltip                 = 1 << 18,  
};
enum ImGuiConfigFlags_
{
    ImGuiConfigFlags_None                   = 0,
    ImGuiConfigFlags_NavEnableKeyboard      = 1 << 0,   
    ImGuiConfigFlags_NavEnableGamepad       = 1 << 1,   
    ImGuiConfigFlags_NoMouse                = 1 << 4,   
    ImGuiConfigFlags_NoMouseCursorChange    = 1 << 5,   
    ImGuiConfigFlags_NoKeyboard             = 1 << 6,   
    ImGuiConfigFlags_DockingEnable          = 1 << 7,   
    ImGuiConfigFlags_ViewportsEnable        = 1 << 10,  
    ImGuiConfigFlags_IsSRGB                 = 1 << 20,  
    ImGuiConfigFlags_IsTouchScreen          = 1 << 21,  
};
enum ImGuiBackendFlags_
{
    ImGuiBackendFlags_None                  = 0,
    ImGuiBackendFlags_HasGamepad            = 1 << 0,   
    ImGuiBackendFlags_HasMouseCursors       = 1 << 1,   
    ImGuiBackendFlags_HasSetMousePos        = 1 << 2,   
    ImGuiBackendFlags_RendererHasVtxOffset  = 1 << 3,   
    ImGuiBackendFlags_RendererHasTextures   = 1 << 4,   
    ImGuiBackendFlags_RendererHasViewports  = 1 << 10,  
    ImGuiBackendFlags_PlatformHasViewports  = 1 << 11,  
    ImGuiBackendFlags_HasMouseHoveredViewport=1 << 12,  
    ImGuiBackendFlags_HasParentViewport     = 1 << 13,  
};
enum ImGuiCol_
{
    ImGuiCol_Text,
    ImGuiCol_TextDisabled,
    ImGuiCol_WindowBg,              
    ImGuiCol_ChildBg,               
    ImGuiCol_PopupBg,               
    ImGuiCol_Border,
    ImGuiCol_BorderShadow,
    ImGuiCol_FrameBg,               
    ImGuiCol_FrameBgHovered,
    ImGuiCol_FrameBgActive,
    ImGuiCol_TitleBg,               
    ImGuiCol_TitleBgActive,         
    ImGuiCol_TitleBgCollapsed,      
    ImGuiCol_MenuBarBg,
    ImGuiCol_ScrollbarBg,
    ImGuiCol_ScrollbarGrab,
    ImGuiCol_ScrollbarGrabHovered,
    ImGuiCol_ScrollbarGrabActive,
    ImGuiCol_CheckMark,             
    ImGuiCol_CheckboxSelectedBg,    
    ImGuiCol_SliderGrab,
    ImGuiCol_SliderGrabActive,
    ImGuiCol_Button,
    ImGuiCol_ButtonHovered,
    ImGuiCol_ButtonActive,
    ImGuiCol_Header,                
    ImGuiCol_HeaderHovered,
    ImGuiCol_HeaderActive,
    ImGuiCol_Separator,
    ImGuiCol_SeparatorHovered,
    ImGuiCol_SeparatorActive,
    ImGuiCol_ResizeGrip,            
    ImGuiCol_ResizeGripHovered,
    ImGuiCol_ResizeGripActive,
    ImGuiCol_InputTextCursor,       
    ImGuiCol_TabHovered,            
    ImGuiCol_Tab,                   
    ImGuiCol_TabSelected,           
    ImGuiCol_TabSelectedOverline,   
    ImGuiCol_TabDimmed,             
    ImGuiCol_TabDimmedSelected,     
    ImGuiCol_TabDimmedSelectedOverline,
    ImGuiCol_DockingPreview,        
    ImGuiCol_DockingEmptyBg,        
    ImGuiCol_PlotLines,
    ImGuiCol_PlotLinesHovered,
    ImGuiCol_PlotHistogram,
    ImGuiCol_PlotHistogramHovered,
    ImGuiCol_TableHeaderBg,         
    ImGuiCol_TableBorderStrong,     
    ImGuiCol_TableBorderLight,      
    ImGuiCol_TableRowBg,            
    ImGuiCol_TableRowBgAlt,         
    ImGuiCol_TextLink,              
    ImGuiCol_TextSelectedBg,        
    ImGuiCol_TreeLines,             
    ImGuiCol_DragDropTarget,        
    ImGuiCol_DragDropTargetBg,      
    ImGuiCol_UnsavedMarker,         
    ImGuiCol_NavCursor,             
    ImGuiCol_NavWindowingHighlight, 
    ImGuiCol_NavWindowingDimBg,     
    ImGuiCol_ModalWindowDimBg,      
    ImGuiCol_COUNT,
};
enum ImGuiStyleVar_
{
    ImGuiStyleVar_Alpha,                    
    ImGuiStyleVar_DisabledAlpha,            
    ImGuiStyleVar_WindowPadding,            
    ImGuiStyleVar_WindowRounding,           
    ImGuiStyleVar_WindowBorderSize,         
    ImGuiStyleVar_WindowMinSize,            
    ImGuiStyleVar_WindowTitleAlign,         
    ImGuiStyleVar_ChildRounding,            
    ImGuiStyleVar_ChildBorderSize,          
    ImGuiStyleVar_PopupRounding,            
    ImGuiStyleVar_PopupBorderSize,          
    ImGuiStyleVar_FramePadding,             
    ImGuiStyleVar_FrameRounding,            
    ImGuiStyleVar_FrameBorderSize,          
    ImGuiStyleVar_ItemSpacing,              
    ImGuiStyleVar_ItemInnerSpacing,         
    ImGuiStyleVar_IndentSpacing,            
    ImGuiStyleVar_CellPadding,              
    ImGuiStyleVar_ScrollbarSize,            
    ImGuiStyleVar_ScrollbarRounding,        
    ImGuiStyleVar_ScrollbarPadding,         
    ImGuiStyleVar_GrabMinSize,              
    ImGuiStyleVar_GrabRounding,             
    ImGuiStyleVar_ImageRounding,            
    ImGuiStyleVar_ImageBorderSize,          
    ImGuiStyleVar_TabRounding,              
    ImGuiStyleVar_TabBorderSize,            
    ImGuiStyleVar_TabMinWidthBase,          
    ImGuiStyleVar_TabMinWidthShrink,        
    ImGuiStyleVar_TabBarBorderSize,         
    ImGuiStyleVar_TabBarOverlineSize,       
    ImGuiStyleVar_TableAngledHeadersAngle,  
    ImGuiStyleVar_TableAngledHeadersTextAlign,
    ImGuiStyleVar_TreeLinesSize,            
    ImGuiStyleVar_TreeLinesRounding,        
    ImGuiStyleVar_MenuItemRounding,         
    ImGuiStyleVar_SelectableRounding,       
    ImGuiStyleVar_DragDropTargetRounding,   
    ImGuiStyleVar_ButtonTextAlign,          
    ImGuiStyleVar_SelectableTextAlign,      
    ImGuiStyleVar_SeparatorSize,            
    ImGuiStyleVar_SeparatorTextBorderSize,  
    ImGuiStyleVar_SeparatorTextAlign,       
    ImGuiStyleVar_SeparatorTextPadding,     
    ImGuiStyleVar_DockingSeparatorSize,     
    ImGuiStyleVar_COUNT
};
enum ImGuiButtonFlags_
{
    ImGuiButtonFlags_None                   = 0,
    ImGuiButtonFlags_MouseButtonLeft        = 1 << 0,   
    ImGuiButtonFlags_MouseButtonRight       = 1 << 1,   
    ImGuiButtonFlags_MouseButtonMiddle      = 1 << 2,   
    ImGuiButtonFlags_MouseButtonMask_       = ImGuiButtonFlags_MouseButtonLeft | ImGuiButtonFlags_MouseButtonRight | ImGuiButtonFlags_MouseButtonMiddle, 
    ImGuiButtonFlags_EnableNav              = 1 << 3,   
    ImGuiButtonFlags_AllowOverlap           = 1 << 12,  
};
enum ImGuiColorEditFlags_
{
    ImGuiColorEditFlags_None            = 0,
    ImGuiColorEditFlags_NoAlpha         = 1 << 1,   
    ImGuiColorEditFlags_NoPicker        = 1 << 2,   
    ImGuiColorEditFlags_NoOptions       = 1 << 3,   
    ImGuiColorEditFlags_NoSmallPreview  = 1 << 4,   
    ImGuiColorEditFlags_NoInputs        = 1 << 5,   
    ImGuiColorEditFlags_NoTooltip       = 1 << 6,   
    ImGuiColorEditFlags_NoLabel         = 1 << 7,   
    ImGuiColorEditFlags_NoSidePreview   = 1 << 8,   
    ImGuiColorEditFlags_NoDragDrop      = 1 << 9,   
    ImGuiColorEditFlags_NoBorder        = 1 << 10,  
    ImGuiColorEditFlags_NoColorMarkers  = 1 << 11,  
    ImGuiColorEditFlags_AlphaOpaque     = 1 << 12,  
    ImGuiColorEditFlags_AlphaNoBg       = 1 << 13,  
    ImGuiColorEditFlags_AlphaPreviewHalf= 1 << 14,  
    ImGuiColorEditFlags_AlphaBar        = 1 << 18,  
    ImGuiColorEditFlags_HDR             = 1 << 19,  
    ImGuiColorEditFlags_DisplayRGB      = 1 << 20,  
    ImGuiColorEditFlags_DisplayHSV      = 1 << 21,  
    ImGuiColorEditFlags_DisplayHex      = 1 << 22,  
    ImGuiColorEditFlags_Uint8           = 1 << 23,  
    ImGuiColorEditFlags_Float           = 1 << 24,  
    ImGuiColorEditFlags_PickerHueBar    = 1 << 25,  
    ImGuiColorEditFlags_PickerHueWheel  = 1 << 26,  
    ImGuiColorEditFlags_PickerNoRotate  = 1 << 27,  
    ImGuiColorEditFlags_InputRGB        = 1 << 28,  
    ImGuiColorEditFlags_InputHSV        = 1 << 29,  
    ImGuiColorEditFlags_DefaultOptions_ = ImGuiColorEditFlags_Uint8 | ImGuiColorEditFlags_DisplayRGB | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_PickerHueBar,
    ImGuiColorEditFlags_AlphaMask_      = ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_AlphaOpaque | ImGuiColorEditFlags_AlphaNoBg | ImGuiColorEditFlags_AlphaPreviewHalf,
    ImGuiColorEditFlags_DisplayMask_    = ImGuiColorEditFlags_DisplayRGB | ImGuiColorEditFlags_DisplayHSV | ImGuiColorEditFlags_DisplayHex,
    ImGuiColorEditFlags_DataTypeMask_   = ImGuiColorEditFlags_Uint8 | ImGuiColorEditFlags_Float,
    ImGuiColorEditFlags_PickerMask_     = ImGuiColorEditFlags_PickerHueWheel | ImGuiColorEditFlags_PickerHueBar,
    ImGuiColorEditFlags_InputMask_      = ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_InputHSV,
};
enum ImGuiSliderFlags_
{
    ImGuiSliderFlags_None               = 0,
    ImGuiSliderFlags_Logarithmic        = 1 << 5,       
    ImGuiSliderFlags_NoRoundToFormat    = 1 << 6,       
    ImGuiSliderFlags_NoInput            = 1 << 7,       
    ImGuiSliderFlags_WrapAround         = 1 << 8,       
    ImGuiSliderFlags_ClampOnInput       = 1 << 9,       
    ImGuiSliderFlags_ClampZeroRange     = 1 << 10,      
    ImGuiSliderFlags_NoSpeedTweaks      = 1 << 11,      
    ImGuiSliderFlags_ColorMarkers       = 1 << 12,      
    ImGuiSliderFlags_AlwaysClamp        = ImGuiSliderFlags_ClampOnInput | ImGuiSliderFlags_ClampZeroRange,
    ImGuiSliderFlags_InvalidMask_       = 0x7000000F,   
};
enum ImGuiMouseButton_
{
    ImGuiMouseButton_Left = 0,
    ImGuiMouseButton_Right = 1,
    ImGuiMouseButton_Middle = 2,
    ImGuiMouseButton_X1 = 3,
    ImGuiMouseButton_X2 = 4,
    ImGuiMouseButton_COUNT = 5
};
enum ImGuiMouseCursor_
{
    ImGuiMouseCursor_None = -1,
    ImGuiMouseCursor_Arrow = 0,
    ImGuiMouseCursor_TextInput,         
    ImGuiMouseCursor_ResizeAll,         
    ImGuiMouseCursor_ResizeNS,          
    ImGuiMouseCursor_ResizeEW,          
    ImGuiMouseCursor_ResizeNESW,        
    ImGuiMouseCursor_ResizeNWSE,        
    ImGuiMouseCursor_Hand,              
    ImGuiMouseCursor_Wait,              
    ImGuiMouseCursor_Progress,          
    ImGuiMouseCursor_NotAllowed,        
    ImGuiMouseCursor_COUNT
};
enum ImGuiMouseSource : int
{
    ImGuiMouseSource_Mouse = 0,         
    ImGuiMouseSource_TouchScreen,       
    ImGuiMouseSource_Pen,               
    ImGuiMouseSource_COUNT
};
enum ImGuiCond_
{
    ImGuiCond_None          = 0,        
    ImGuiCond_Always        = 1 << 0,   
    ImGuiCond_Once          = 1 << 1,   
    ImGuiCond_FirstUseEver  = 1 << 2,   
    ImGuiCond_Appearing     = 1 << 3,   
};
enum ImGuiTableFlags_
{
    ImGuiTableFlags_None                       = 0,
    ImGuiTableFlags_Resizable                  = 1 << 0,   
    ImGuiTableFlags_Reorderable                = 1 << 1,   
    ImGuiTableFlags_Hideable                   = 1 << 2,   
    ImGuiTableFlags_Sortable                   = 1 << 3,   
    ImGuiTableFlags_NoSavedSettings            = 1 << 4,   
    ImGuiTableFlags_ContextMenuInBody          = 1 << 5,   
    ImGuiTableFlags_RowBg                      = 1 << 6,   
    ImGuiTableFlags_BordersInnerH              = 1 << 7,   
    ImGuiTableFlags_BordersOuterH              = 1 << 8,   
    ImGuiTableFlags_BordersInnerV              = 1 << 9,   
    ImGuiTableFlags_BordersOuterV              = 1 << 10,  
    ImGuiTableFlags_BordersH                   = ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_BordersOuterH, 
    ImGuiTableFlags_BordersV                   = ImGuiTableFlags_BordersInnerV | ImGuiTableFlags_BordersOuterV, 
    ImGuiTableFlags_BordersInner               = ImGuiTableFlags_BordersInnerV | ImGuiTableFlags_BordersInnerH, 
    ImGuiTableFlags_BordersOuter               = ImGuiTableFlags_BordersOuterV | ImGuiTableFlags_BordersOuterH, 
    ImGuiTableFlags_Borders                    = ImGuiTableFlags_BordersInner | ImGuiTableFlags_BordersOuter,   
    ImGuiTableFlags_NoBordersInBody            = 1 << 11,  
    ImGuiTableFlags_NoBordersInBodyUntilResize = 1 << 12,  
    ImGuiTableFlags_SizingFixedFit             = 1 << 13,  
    ImGuiTableFlags_SizingFixedSame            = 2 << 13,  
    ImGuiTableFlags_SizingStretchProp          = 3 << 13,  
    ImGuiTableFlags_SizingStretchSame          = 4 << 13,  
    ImGuiTableFlags_NoHostExtendX              = 1 << 16,  
    ImGuiTableFlags_NoHostExtendY              = 1 << 17,  
    ImGuiTableFlags_NoKeepColumnsVisible       = 1 << 18,  
    ImGuiTableFlags_PreciseWidths              = 1 << 19,  
    ImGuiTableFlags_NoClip                     = 1 << 20,  
    ImGuiTableFlags_PadOuterX                  = 1 << 21,  
    ImGuiTableFlags_NoPadOuterX                = 1 << 22,  
    ImGuiTableFlags_NoPadInnerX                = 1 << 23,  
    ImGuiTableFlags_ScrollX                    = 1 << 24,  
    ImGuiTableFlags_ScrollY                    = 1 << 25,  
    ImGuiTableFlags_SortMulti                  = 1 << 26,  
    ImGuiTableFlags_SortTristate               = 1 << 27,  
    ImGuiTableFlags_HighlightHoveredColumn     = 1 << 28,  
    ImGuiTableFlags_SizingMask_                = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_SizingFixedSame | ImGuiTableFlags_SizingStretchProp | ImGuiTableFlags_SizingStretchSame,
};
enum ImGuiTableColumnFlags_
{
    ImGuiTableColumnFlags_None                  = 0,
    ImGuiTableColumnFlags_Disabled              = 1 << 0,   
    ImGuiTableColumnFlags_DefaultHide           = 1 << 1,   
    ImGuiTableColumnFlags_DefaultSort           = 1 << 2,   
    ImGuiTableColumnFlags_WidthStretch          = 1 << 3,   
    ImGuiTableColumnFlags_WidthFixed            = 1 << 4,   
    ImGuiTableColumnFlags_NoResize              = 1 << 5,   
    ImGuiTableColumnFlags_NoReorder             = 1 << 6,   
    ImGuiTableColumnFlags_NoHide                = 1 << 7,   
    ImGuiTableColumnFlags_NoClip                = 1 << 8,   
    ImGuiTableColumnFlags_NoSort                = 1 << 9,   
    ImGuiTableColumnFlags_NoSortAscending       = 1 << 10,  
    ImGuiTableColumnFlags_NoSortDescending      = 1 << 11,  
    ImGuiTableColumnFlags_NoHeaderLabel         = 1 << 12,  
    ImGuiTableColumnFlags_NoHeaderWidth         = 1 << 13,  
    ImGuiTableColumnFlags_PreferSortAscending   = 1 << 14,  
    ImGuiTableColumnFlags_PreferSortDescending  = 1 << 15,  
    ImGuiTableColumnFlags_IndentEnable          = 1 << 16,  
    ImGuiTableColumnFlags_IndentDisable         = 1 << 17,  
    ImGuiTableColumnFlags_AngledHeader          = 1 << 18,  
    ImGuiTableColumnFlags_IsEnabled             = 1 << 24,  
    ImGuiTableColumnFlags_IsVisible             = 1 << 25,  
    ImGuiTableColumnFlags_IsSorted              = 1 << 26,  
    ImGuiTableColumnFlags_IsHovered             = 1 << 27,  
    ImGuiTableColumnFlags_WidthMask_            = ImGuiTableColumnFlags_WidthStretch | ImGuiTableColumnFlags_WidthFixed,
    ImGuiTableColumnFlags_IndentMask_           = ImGuiTableColumnFlags_IndentEnable | ImGuiTableColumnFlags_IndentDisable,
    ImGuiTableColumnFlags_StatusMask_           = ImGuiTableColumnFlags_IsEnabled | ImGuiTableColumnFlags_IsVisible | ImGuiTableColumnFlags_IsSorted | ImGuiTableColumnFlags_IsHovered,
    ImGuiTableColumnFlags_NoDirectResize_       = 1 << 30,  
};
enum ImGuiTableRowFlags_
{
    ImGuiTableRowFlags_None                     = 0,
    ImGuiTableRowFlags_Headers                  = 1 << 0,   
};
enum ImGuiTableBgTarget_
{
    ImGuiTableBgTarget_None                     = 0,
    ImGuiTableBgTarget_RowBg0                   = 1,        
    ImGuiTableBgTarget_RowBg1                   = 2,        
    ImGuiTableBgTarget_CellBg                   = 3,        
};
struct ImGuiTableSortSpecs
{
    const ImGuiTableColumnSortSpecs* Specs;     
    int                         SpecsCount;     
    bool                        SpecsDirty;     
    ImGuiTableSortSpecs()       { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiTableColumnSortSpecs
{
    ImGuiID                     ColumnUserID;       
    ImS16                       ColumnIndex;        
    ImS16                       SortOrder;          
    ImGuiSortDirection          SortDirection;      
    ImGuiTableColumnSortSpecs() { memset((void*)this, 0, sizeof(*this)); }
};
struct ImNewWrapper {};
inline void* operator new(size_t, ImNewWrapper, void* ptr) { return ptr; }
inline void  operator delete(void*, ImNewWrapper, void*)   {} 
template<typename T> void IM_DELETE(T* p)   { if (p) { p->~T(); ImGui::MemFree(p); } }
template<typename T>
struct ImVector
{
    int                 Size;
    int                 Capacity;
    T*                  Data;
    typedef T                   value_type;
    typedef value_type*         iterator;
    typedef const value_type*   const_iterator;
    inline ImVector()                                       { Size = Capacity = 0; Data = ((void *)0); }
    inline ImVector(const ImVector<T>& src)                 { Size = Capacity = 0; Data = ((void *)0); operator=(src); }
    inline ImVector<T>& operator=(const ImVector<T>& src)   { clear(); resize(src.Size); if (Data && src.Data) memcpy(Data, src.Data, (size_t)Size * sizeof(T)); return *this; }
    inline ~ImVector()                                      { if (Data) ImGui::MemFree(Data); } 
    inline void         clear()                             { if (Data) { Size = Capacity = 0; ImGui::MemFree(Data); Data = ((void *)0); } }  
    inline void         clear_delete()                      { for (int n = 0; n < Size; n++) IM_DELETE(Data[n]); clear(); }     
    inline void         clear_destruct()                    { for (int n = 0; n < Size; n++) Data[n].~T(); clear(); }           
    inline bool         empty() const                       { return Size == 0; }
    inline int          size() const                        { return Size; }
    inline int          size_in_bytes() const               { return Size * (int)sizeof(T); }
    inline int          max_size() const                    { return 0x7FFFFFFF / (int)sizeof(T); }
    inline int          capacity() const                    { return Capacity; }
     inline T&        operator[](int i)       { ((void)( (!!(i >= 0 && i < Size)) || (_wassert(L"i >= 0 && i < Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2388)), 0)) ); return Data[i]; }
     inline const T&  operator[](int i) const { ((void)( (!!(i >= 0 && i < Size)) || (_wassert(L"i >= 0 && i < Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2389)), 0)) ); return Data[i]; }
     inline T* begin() { return Data; }
     inline const T* begin() const { return Data; }
     inline T* end() { return Data + Size; }
     inline const T* end() const { return Data + Size; }
    inline T&           front()                             { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2395)), 0)) ); return Data[0]; }
    inline const T&     front() const                       { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2396)), 0)) ); return Data[0]; }
    inline T&           back()                              { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2397)), 0)) ); return Data[Size - 1]; }
    inline const T&     back() const                        { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2398)), 0)) ); return Data[Size - 1]; }
    inline void         swap(ImVector<T>& rhs)              { int rhs_size = rhs.Size; rhs.Size = Size; Size = rhs_size; int rhs_cap = rhs.Capacity; rhs.Capacity = Capacity; Capacity = rhs_cap; T* rhs_data = rhs.Data; rhs.Data = Data; Data = rhs_data; }
    inline int          _grow_capacity(int sz) const        { int new_capacity = Capacity ? (Capacity + Capacity / 2) : 8; return new_capacity > sz ? new_capacity : sz; }
    inline void         resize(int new_size)                { if (new_size > Capacity) reserve(_grow_capacity(new_size)); Size = new_size; }
    inline void         resize(int new_size, const T& v)    { if (new_size > Capacity) reserve(_grow_capacity(new_size)); if (new_size > Size) for (int n = Size; n < new_size; n++) memcpy(&Data[n], &v, sizeof(v)); Size = new_size; }
    inline void         shrink(int new_size)                { ((void)( (!!(new_size <= Size)) || (_wassert(L"new_size <= Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2404)), 0)) ); Size = new_size; } 
    inline void         reserve(int new_capacity)           { if (new_capacity <= Capacity) return; T* new_data = (T*)ImGui::MemAlloc((size_t)new_capacity * sizeof(T)); if (Data) { memcpy(new_data, Data, (size_t)Size * sizeof(T)); ImGui::MemFree(Data); } Data = new_data; Capacity = new_capacity; }
    inline void         reserve_discard(int new_capacity)   { if (new_capacity <= Capacity) return; if (Data) ImGui::MemFree(Data); Data = (T*)ImGui::MemAlloc((size_t)new_capacity * sizeof(T)); Capacity = new_capacity; }
    inline void         push_back(const T& v)               { if (Size == Capacity) reserve(_grow_capacity(Size + 1)); memcpy(&Data[Size], &v, sizeof(v)); Size++; }
    inline void         pop_back()                          { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2410)), 0)) ); Size--; }
    inline void         push_front(const T& v)              { if (Size == 0) push_back(v); else insert(Data, v); }
    inline T*           erase(const T* it)                  { ((void)( (!!(it >= Data && it < Data + Size)) || (_wassert(L"it >= Data && it < Data + Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2412)), 0)) ); const ptrdiff_t off = it - Data; memmove(Data + off, Data + off + 1, ((size_t)Size - (size_t)off - 1) * sizeof(T)); Size--; return Data + off; }
    inline T*           erase(const T* it, const T* it_last){ ((void)( (!!(it >= Data && it < Data + Size && it_last >= it && it_last <= Data + Size)) || (_wassert(L"it >= Data && it < Data + Size && it_last >= it && it_last <= Data + Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2413)), 0)) ); const ptrdiff_t count = it_last - it; const ptrdiff_t off = it - Data; memmove(Data + off, Data + off + count, ((size_t)Size - (size_t)off - (size_t)count) * sizeof(T)); Size -= (int)count; return Data + off; }
    inline T*           erase_unsorted(const T* it)         { ((void)( (!!(it >= Data && it < Data + Size)) || (_wassert(L"it >= Data && it < Data + Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2414)), 0)) );  const ptrdiff_t off = it - Data; if (it < Data + Size - 1) memcpy(Data + off, Data + Size - 1, sizeof(T)); Size--; return Data + off; }
    inline T*           insert(const T* it, const T& v)     { ((void)( (!!(it >= Data && it <= Data + Size)) || (_wassert(L"it >= Data && it <= Data + Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2415)), 0)) ); const ptrdiff_t off = it - Data; if (Size == Capacity) reserve(_grow_capacity(Size + 1)); if (off < (int)Size) memmove(Data + off + 1, Data + off, ((size_t)Size - (size_t)off) * sizeof(T)); memcpy(&Data[off], &v, sizeof(v)); Size++; return Data + off; }
    inline bool         contains(const T& v) const          { const T* data = Data;  const T* data_end = Data + Size; while (data < data_end) if (*data++ == v) return true; return false; }
    inline T*           find(const T& v)                    { T* data = Data;  const T* data_end = Data + Size; while (data < data_end) if (*data == v) break; else ++data; return data; }
    inline const T*     find(const T& v) const              { const T* data = Data;  const T* data_end = Data + Size; while (data < data_end) if (*data == v) break; else ++data; return data; }
    inline int          find_index(const T& v) const        { const T* data_end = Data + Size; const T* it = find(v); if (it == data_end) return -1; const ptrdiff_t off = it - Data; return (int)off; }
    inline bool         find_erase(const T& v)              { const T* it = find(v); if (it < Data + Size) { erase(it); return true; } return false; }
    inline bool         find_erase_unsorted(const T& v)     { const T* it = find(v); if (it < Data + Size) { erase_unsorted(it); return true; } return false; }
    inline int          index_from_ptr(const T* it) const   { ((void)( (!!(it >= Data && it < Data + Size)) || (_wassert(L"it >= Data && it < Data + Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2422)), 0)) ); const ptrdiff_t off = it - Data; return (int)off; }
};
struct ImGuiStyle
{
    float       FontSizeBase;               
    float       FontScaleMain;              
    float       FontScaleDpi;               
    float       Alpha;                      
    float       DisabledAlpha;              
    ImVec2      WindowPadding;              
    float       WindowRounding;             
    float       WindowBorderSize;           
    float       WindowBorderHoverPadding;   
    ImVec2      WindowMinSize;              
    ImVec2      WindowTitleAlign;           
    ImGuiDir    WindowMenuButtonPosition;   
    float       ChildRounding;              
    float       ChildBorderSize;            
    float       PopupRounding;              
    float       PopupBorderSize;            
    ImVec2      FramePadding;               
    float       FrameRounding;              
    float       FrameBorderSize;            
    ImVec2      ItemSpacing;                
    ImVec2      ItemInnerSpacing;           
    ImVec2      CellPadding;                
    ImVec2      TouchExtraPadding;          
    float       IndentSpacing;              
    float       ColumnsMinSpacing;          
    float       ScrollbarSize;              
    float       ScrollbarRounding;          
    float       ScrollbarPadding;           
    float       GrabMinSize;                
    float       GrabRounding;               
    float       LogSliderDeadzone;          
    float       ImageRounding;              
    float       ImageBorderSize;            
    float       TabRounding;                
    float       TabBorderSize;              
    float       TabMinWidthBase;            
    float       TabMinWidthShrink;          
    float       TabCloseButtonMinWidthSelected;     
    float       TabCloseButtonMinWidthUnselected;   
    float       TabBarBorderSize;           
    float       TabBarOverlineSize;         
    float       TableAngledHeadersAngle;    
    ImVec2      TableAngledHeadersTextAlign;
    ImGuiTreeNodeFlags TreeLinesFlags;      
    float       TreeLinesSize;              
    float       TreeLinesRounding;          
    float       MenuItemRounding;           
    float       SelectableRounding;         
    float       DragDropTargetRounding;     
    float       DragDropTargetBorderSize;   
    float       DragDropTargetPadding;      
    float       ColorMarkerSize;            
    ImGuiDir    ColorButtonPosition;        
    ImVec2      ButtonTextAlign;            
    ImVec2      SelectableTextAlign;        
    float       InputTextCursorSize;        
    float       SeparatorSize;              
    float       SeparatorTextBorderSize;    
    ImVec2      SeparatorTextAlign;         
    ImVec2      SeparatorTextPadding;       
    ImVec2      DisplayWindowPadding;       
    ImVec2      DisplaySafeAreaPadding;     
    bool        DockingNodeHasCloseButton;  
    float       DockingSeparatorSize;       
    float       MouseCursorScale;           
    ImVec2      SymbolArrowSizeFactor;      
    float       SymbolArrowThicknessFactor; 
    bool        AntiAliasedLines;           
    bool        AntiAliasedLineEnds;        
    bool        AntiAliasedFill;            
    float       CurveTessellationMaxError;  
    float       CircleTessellationMaxError; 
    ImVec4      Colors[ImGuiCol_COUNT];
    float             HoverStationaryDelay;     
    float             HoverDelayShort;          
    float             HoverDelayNormal;         
    ImGuiHoveredFlags HoverFlagsForTooltipMouse;
    ImGuiHoveredFlags HoverFlagsForTooltipNav;  
    float       _MainScale;                 
    float       _NextFrameFontSizeBase;     
       ImGuiStyle();
       void ScaleAllSizes(float scale_factor); 
};
struct ImGuiKeyData
{
    bool        Down;               
    float       DownDuration;       
    float       DownDurationPrev;   
    float       AnalogValue;        
};
struct ImGuiIO
{
    ImGuiConfigFlags   ConfigFlags;             
    ImGuiBackendFlags  BackendFlags;            
    ImVec2      DisplaySize;                    
    ImVec2      DisplayFramebufferScale;        
    float       DeltaTime;                      
    float       IniSavingRate;                  
    const char* IniFilename;                    
    const char* LogFilename;                    
    void*       UserData;                       
    ImFontAtlas*Fonts;                          
    ImFont*     FontDefault;                    
    bool        FontAllowUserScaling;           
    bool        ConfigNavSwapGamepadButtons;    
    bool        ConfigNavMoveSetMousePos;       
    bool        ConfigNavCaptureKeyboard;       
    bool        ConfigNavEscapeClearFocusItem;  
    bool        ConfigNavEscapeClearFocusWindow;
    bool        ConfigNavCursorVisibleAuto;     
    bool        ConfigNavCursorVisibleAlways;   
    bool        ConfigDockingNoSplit;           
    bool        ConfigDockingNoDockingOver;     
    bool        ConfigDockingWithShift;         
    bool        ConfigDockingAlwaysTabBar;      
    bool        ConfigDockingTransparentPayload;
    bool        ConfigViewportsNoAutoMerge;     
    bool        ConfigViewportsNoTaskBarIcon;   
    bool        ConfigViewportsNoDecoration;    
    bool        ConfigViewportsNoDefaultParent; 
    bool        ConfigViewportsPlatformFocusSetsImGuiFocus;
    bool        ConfigDpiScaleFonts;            
    bool        ConfigDpiScaleViewports;        
    bool        ConfigMacOSXBehaviors;          
    bool        ConfigInputTrickleEventQueue;   
    bool        ConfigInputTextCursorBlink;     
    bool        ConfigInputTextEnterKeepActive; 
    ImGuiColorEditFlags ConfigColorEditFlags;   
    bool        ConfigDragClickToInputText;     
    bool        ConfigWindowsResizeFromEdges;   
    bool        ConfigWindowsMoveFromTitleBarOnly;  
    bool        ConfigWindowsCopyContentsWithCtrlC; 
    bool        ConfigScrollbarScrollByPage;    
    bool        ConfigIniSettingsSaveLastUsedDate;
    int         ConfigIniSettingsAutoDiscardMonths; 
    bool        ConfigDebugIniSettings;         
    bool        MouseDrawCursor;                
    float       ConfigMemoryCompactTimer;       
    float       MouseDoubleClickTime;           
    float       MouseDoubleClickMaxDist;        
    float       MouseSingleClickDelay;          
    float       MouseDragThreshold;             
    float       KeyRepeatDelay;                 
    float       KeyRepeatRate;                  
    bool        ConfigErrorRecovery;                
    bool        ConfigErrorRecoveryEnableAssert;    
    bool        ConfigErrorRecoveryEnableDebugLog;  
    bool        ConfigErrorRecoveryEnableTooltip;   
    bool        ConfigDebugIsDebuggerPresent;   
    bool        ConfigDebugHighlightIdConflicts;
    bool        ConfigDebugHighlightIdConflictsShowItemPicker;
    bool        ConfigDebugBeginReturnValueOnce;
    bool        ConfigDebugBeginReturnValueLoop;
    bool        ConfigDebugIgnoreFocusLoss;     
    bool        ConfigDebugDrawListDefaultsToStrokeLegacy; 
    const char* BackendPlatformName;            
    const char* BackendRendererName;            
    void*       BackendPlatformUserData;        
    void*       BackendRendererUserData;        
    void*       BackendLanguageUserData;        
     void  AddKeyEvent(ImGuiKey key, bool down);                   
     void  AddKeyAnalogEvent(ImGuiKey key, bool down, float v);    
     void  AddMousePosEvent(float x, float y);                     
     void  AddMouseButtonEvent(int button, bool down);             
     void  AddMouseWheelEvent(float wheel_x, float wheel_y);       
     void  AddMouseSourceEvent(ImGuiMouseSource source);           
     void  AddMouseViewportEvent(ImGuiID id);                      
     void  AddFocusEvent(bool focused);                            
     void  AddInputCharacter(unsigned int c);                      
     void  AddInputCharacterUTF16(ImWchar16 c);                    
     void  AddInputCharactersUTF8(const char* str);                
     void  SetKeyEventNativeData(ImGuiKey key, int native_keycode, int native_scancode, int native_legacy_index = -1); 
     void  SetAppAcceptingEvents(bool accepting_events);           
     void  ClearEventsQueue();                                     
     void  ClearInputKeys();                                       
     void  ClearInputMouse();                                      
    bool        WantCaptureMouse;                   
    bool        WantCaptureKeyboard;                
    bool        WantTextInput;                      
    bool        WantSetMousePos;                    
    bool        WantSaveIniSettings;                
    bool        NavActive;                          
    bool        NavVisible;                         
    float       Framerate;                          
    int         MetricsRenderVertices;              
    int         MetricsRenderIndices;               
    int         MetricsRenderWindows;               
    int         MetricsActiveWindows;               
    ImVec2      MouseDelta;                         
    ImGuiContext* Ctx;                              
    ImVec2      MousePos;                           
    bool        MouseDown[5];                       
    float       MouseWheel;                         
    float       MouseWheelH;                        
    ImGuiMouseSource MouseSource;                   
    ImGuiID     MouseHoveredViewport;               
    bool        KeyCtrl;                            
    bool        KeyShift;                           
    bool        KeyAlt;                             
    bool        KeySuper;                           
    ImGuiKeyChord KeyMods;                          
    ImGuiKeyData  KeysData[ImGuiKey_NamedKey_COUNT];
    bool        WantCaptureMouseUnlessPopupClose;   
    ImVec2      MousePosPrev;                       
    ImVec2      MouseClickedPos[5];                 
    double      MouseClickedTime[5];                
    bool        MouseClicked[5];                    
    bool        MouseDoubleClicked[5];              
    ImU16       MouseClickedCount[5];               
    ImU16       MouseClickedLastCount[5];           
    bool        MouseReleased[5];                   
    double      MouseReleasedTime[5];               
    bool        MouseDownOwned[5];                  
    bool        MouseDownOwnedUnlessPopupClose[5];  
    bool        MouseWheelRequestAxisSwap;          
    bool        MouseCtrlLeftAsRightClick;          
    float       MouseDownDuration[5];               
    float       MouseDownDurationPrev[5];           
    ImVec2      MouseDragMaxDistanceAbs[5];         
    float       MouseDragMaxDistanceSqr[5];         
    float       PenPressure;                        
    bool        AppFocusLost;                       
    bool        AppAcceptingEvents;                 
    ImWchar16   InputQueueSurrogate;                
    ImVector<ImWchar> InputQueueCharacters;         
       ImGuiIO();
};
struct ImGuiInputTextCallbackData
{
    ImGuiContext*       Ctx;            
    ImGuiInputTextFlags EventFlag;      
    ImGuiInputTextFlags Flags;          
    void*               UserData;       
    ImGuiID             ID;             
    ImGuiKey            EventKey;       
    ImWchar             EventChar;      
    bool                EventActivated; 
    bool                BufDirty;       
    char*               Buf;            
    int                 BufTextLen;     
    int                 BufSize;        
    int                 CursorPos;      
    int                 SelectionStart; 
    int                 SelectionEnd;   
     ImGuiInputTextCallbackData();
     void      DeleteChars(int pos, int bytes_count);
     void      InsertChars(int pos, const char* text, const char* text_end = ((void *)0));
    void                SelectAll()                 { SelectionStart = 0; CursorPos = SelectionEnd = BufTextLen; }
    void                SetSelection(int s, int e)  { ((void)( (!!(s >= 0 && s <= BufTextLen)) || (_wassert(L"s >= 0 && s <= BufTextLen", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2871)), 0)) ); ((void)( (!!(e >= 0 && e <= BufTextLen)) || (_wassert(L"e >= 0 && e <= BufTextLen", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2871)), 0)) ); SelectionStart = s; CursorPos = SelectionEnd = e; }
    void                ClearSelection()            { SelectionStart = SelectionEnd = BufTextLen; }
    bool                HasSelection() const        { return SelectionStart != SelectionEnd; }
};
struct ImGuiSizeCallbackData
{
    void*   UserData;       
    ImVec2  Pos;            
    ImVec2  CurrentSize;    
    ImVec2  DesiredSize;    
};
struct ImGuiWindowClass
{
    ImGuiID             ClassId;                    
    ImGuiID             ParentViewportId;           
    ImGuiID             FocusRouteParentWindowId;   
    ImGuiViewportFlags  ViewportFlagsOverrideSet;   
    ImGuiViewportFlags  ViewportFlagsOverrideClear; 
    ImGuiTabItemFlags   TabItemFlagsOverrideSet;    
    ImGuiDockNodeFlags  DockNodeFlagsOverrideSet;   
    bool                DockingAlwaysTabBar;        
    bool                DockingAllowUnclassed;      
    void*               PlatformIconData;           
    ImGuiWindowClass() { memset((void*)this, 0, sizeof(*this)); ParentViewportId = (ImGuiID)-1; DockingAllowUnclassed = true; }
};
struct ImGuiPayload
{
    void*           Data;               
    int             DataSize;           
    ImGuiID         SourceId;           
    ImGuiID         SourceParentId;     
    int             DataFrameCount;     
    char            DataType[32 + 1];   
    bool            Preview;            
    bool            Delivery;           
    ImGuiPayload()  { Clear(); }
    void Clear()    { SourceId = SourceParentId = 0; Data = ((void *)0); DataSize = 0; memset(DataType, 0, sizeof(DataType)); DataFrameCount = -1; Preview = Delivery = false; }
    bool IsDataType(const char* type) const { return DataFrameCount != -1 && strcmp(type, DataType) == 0; }
    bool IsPreview() const                  { return Preview; }
    bool IsDelivery() const                 { return Delivery; }
};
struct ImGuiOnceUponAFrame
{
    ImGuiOnceUponAFrame() { RefFrame = -1; }
    mutable int RefFrame;
    operator bool() const { int current_frame = ImGui::GetFrameCount(); if (RefFrame == current_frame) return false; RefFrame = current_frame; return true; }
};
struct ImGuiTextFilterItem;
struct ImGuiTextFilter
{
               ImGuiTextFilter(const char* default_filter = "");
     bool      PassFilter(const char* text, const char* text_end = ((void *)0)) const;
     void      Build();                                        
    inline void         Clear()          { InputBuf[0] = 0; Build(); }  
    inline bool         IsActive() const { return _Items.Size != 0; }   
     bool      Draw(const char* label = "Filter");
     bool      DrawWithHint(const char* label = "Filter", const char* hint = "incl -excl");
    char                InputBuf[256];      
    int                 _CountExclude;      
    ImVector<ImGuiTextFilterItem> _Items;   
};
struct ImGuiTextBuffer
{
    ImVector<char>      Buf;
     static char EmptyString[1];
    ImGuiTextBuffer()   { }
    inline char         operator[](int i) const { ((void)( (!!(Buf.Data != ((void *)0))) || (_wassert(L"Buf.Data != ((void *)0)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(2983)), 0)) ); return Buf.Data[i]; }
    const char*         begin() const           { return Buf.Data ? &Buf.front() : EmptyString; }
    const char*         end() const             { return Buf.Data ? &Buf.back() : EmptyString; } 
    int                 size() const            { return Buf.Size ? Buf.Size - 1 : 0; }
    bool                empty() const           { return Buf.Size <= 1; }
    void                clear()                 { Buf.clear(); }
    void                resize(int size)        { if (Buf.Size > size) Buf.Data[size] = 0; Buf.resize(size ? size + 1 : 0, 0); } 
    void                reserve(int capacity)   { Buf.reserve(capacity); }
    const char*         c_str() const           { return Buf.Data ? Buf.Data : EmptyString; }
     void      append(const char* str, const char* str_end = ((void *)0));
     void      appendf(const char* fmt, ...) ;
     void      appendfv(const char* fmt, va_list args) ;
};
struct ImGuiStoragePair
{
    ImGuiID     key;
    union       { int val_i; float val_f; void* val_p; };
    ImGuiStoragePair(ImGuiID _key, int _val)    { key = _key; val_i = _val; }
    ImGuiStoragePair(ImGuiID _key, float _val)  { key = _key; val_f = _val; }
    ImGuiStoragePair(ImGuiID _key, void* _val)  { key = _key; val_p = _val; }
};
struct ImGuiStorage
{
    ImVector<ImGuiStoragePair>      Data;
    void                Clear() { Data.clear(); }
     int       GetInt(ImGuiID key, int default_val = 0) const;
     void      SetInt(ImGuiID key, int val);
     bool      GetBool(ImGuiID key, bool default_val = false) const;
     void      SetBool(ImGuiID key, bool val);
     float     GetFloat(ImGuiID key, float default_val = 0.0f) const;
     void      SetFloat(ImGuiID key, float val);
     void*     GetVoidPtr(ImGuiID key) const; 
     void      SetVoidPtr(ImGuiID key, void* val);
     int*      GetIntRef(ImGuiID key, int default_val = 0);
     bool*     GetBoolRef(ImGuiID key, bool default_val = false);
     float*    GetFloatRef(ImGuiID key, float default_val = 0.0f);
     void**    GetVoidPtrRef(ImGuiID key, void* default_val = ((void *)0));
     void      BuildSortByKey();
     void      SetAllInt(int val);
};
template<typename T, int Capacity, typename SZ_T = ImU16>
struct ImSmallStack_
{
    T       LocalData[Capacity];                
    SZ_T    Size = 0;
    inline void         clear()                 { Size = 0; }
    inline T&           back()                  { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(3060)), 0)) ); return LocalData[Size - 1]; }
    inline void         push_back(const T& v)   { ((void)( (!!(Size < Capacity)) || (_wassert(L"Size < Capacity", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(3061)), 0)) ); memcpy(&LocalData[Size], &v, sizeof(v)); Size++; }
    inline void         pop_back()              { ((void)( (!!(Size > 0)) || (_wassert(L"Size > 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(3062)), 0)) ); Size--; }
    inline int          capacity() const        { return Capacity; }
};
enum ImGuiListClipperFlags_
{
    ImGuiListClipperFlags_None                  = 0,
    ImGuiListClipperFlags_NoSetTableRowCounters = 1 << 0,   
};
struct ImGuiListClipper
{
    int             DisplayStart;       
    int             DisplayEnd;         
    int             UserIndex;          
    int             ItemsCount;         
    float           ItemsHeight;        
    ImGuiListClipperFlags Flags;        
    double          StartPosY;          
    double          StartSeekOffsetY;   
    ImGuiContext*   Ctx;                
    void*           TempData;           
     ImGuiListClipper();
     ~ImGuiListClipper();
     void  Begin(int items_count, float items_height = -1.0f);
     void  End();             
     bool  Step();            
    inline void     IncludeItemByIndex(int item_index)                  { IncludeItemsByIndex(item_index, item_index + 1); }
     void  IncludeItemsByIndex(int item_begin, int item_end);  
     void  SeekCursorForItem(int item_index);
};
struct ImColor
{
    ImVec4          Value;
    constexpr ImColor()                                             { }
    constexpr ImColor(float r, float g, float b, float a = 1.0f)    : Value(r, g, b, a) { }
    constexpr ImColor(const ImVec4& col)                            : Value(col) {}
    constexpr ImColor(int r, int g, int b, int a = 255)             : Value((float)r * (1.0f / 255.0f), (float)g * (1.0f / 255.0f), (float)b * (1.0f / 255.0f), (float)a* (1.0f / 255.0f)) {}
    constexpr ImColor(ImU32 rgba)                                   : Value((float)((rgba >> 0) & 0xFF) * (1.0f / 255.0f), (float)((rgba >> 8) & 0xFF) * (1.0f / 255.0f), (float)((rgba >> 16) & 0xFF) * (1.0f / 255.0f), (float)((rgba >> 24) & 0xFF) * (1.0f / 255.0f)) {}
    inline operator ImU32() const                                   { return ImGui::ColorConvertFloat4ToU32(Value); }
    inline operator ImVec4() const                                  { return Value; }
    inline void    SetHSV(float h, float s, float v, float a = 1.0f){ ImGui::ColorConvertHSVtoRGB(h, s, v, Value.x, Value.y, Value.z); Value.w = a; }
    static ImColor HSV(float h, float s, float v, float a = 1.0f)   { float r, g, b; ImGui::ColorConvertHSVtoRGB(h, s, v, r, g, b); return ImColor(r, g, b, a); }
};
enum ImGuiMultiSelectFlags_
{
    ImGuiMultiSelectFlags_None                  = 0,
    ImGuiMultiSelectFlags_SingleSelect          = 1 << 0,   
    ImGuiMultiSelectFlags_NoSelectAll           = 1 << 1,   
    ImGuiMultiSelectFlags_NoRangeSelect         = 1 << 2,   
    ImGuiMultiSelectFlags_NoAutoSelect          = 1 << 3,   
    ImGuiMultiSelectFlags_NoAutoClear           = 1 << 4,   
    ImGuiMultiSelectFlags_NoAutoClearOnReselect = 1 << 5,   
    ImGuiMultiSelectFlags_BoxSelect1d           = 1 << 6,   
    ImGuiMultiSelectFlags_BoxSelect2d           = 1 << 7,   
    ImGuiMultiSelectFlags_BoxSelectNoScroll     = 1 << 8,   
    ImGuiMultiSelectFlags_ClearOnEscape         = 1 << 9,   
    ImGuiMultiSelectFlags_ClearOnClickVoid      = 1 << 10,  
    ImGuiMultiSelectFlags_ScopeWindow           = 1 << 11,  
    ImGuiMultiSelectFlags_ScopeRect             = 1 << 12,  
    ImGuiMultiSelectFlags_SelectOnAuto          = 1 << 13,  
    ImGuiMultiSelectFlags_SelectOnClickAlways   = 1 << 14,  
    ImGuiMultiSelectFlags_SelectOnClickRelease  = 1 << 15,  
    ImGuiMultiSelectFlags_NavWrapX              = 1 << 16,  
    ImGuiMultiSelectFlags_NoSelectOnRightClick  = 1 << 17,  
    ImGuiMultiSelectFlags_SelectOnMask_         = ImGuiMultiSelectFlags_SelectOnAuto | ImGuiMultiSelectFlags_SelectOnClickAlways | ImGuiMultiSelectFlags_SelectOnClickRelease,
    ImGuiMultiSelectFlags_CheckboxMode_         = 1 << 20,  
};
struct ImGuiMultiSelectIO
{
    ImVector<ImGuiSelectionRequest> Requests;   
    ImGuiSelectionUserData      RangeSrcItem;   
    ImGuiSelectionUserData      NavIdItem;      
    bool                        NavIdSelected;  
    bool                        RangeSrcReset;  
    int                         ItemsCount;     
};
enum ImGuiSelectionRequestType
{
    ImGuiSelectionRequestType_None = 0,
    ImGuiSelectionRequestType_SetAll,           
    ImGuiSelectionRequestType_SetRange,         
};
struct ImGuiSelectionRequest
{
    ImGuiSelectionRequestType   Type;           
    bool                        Selected;       
    ImS8                        RangeDirection; 
    ImGuiSelectionUserData      RangeFirstItem; 
    ImGuiSelectionUserData      RangeLastItem;  
};
struct ImGuiSelectionBasicStorage
{
    int             Size;           
    bool            PreserveOrder;  
    void*           UserData;       
    ImGuiID         (*AdapterIndexToStorageId)(ImGuiSelectionBasicStorage* self, int idx);      
    int             _SelectionOrder;
    ImGuiStorage    _Storage;       
     ImGuiSelectionBasicStorage();
     void  ApplyRequests(ImGuiMultiSelectIO* ms_io);   
     bool  Contains(ImGuiID id) const;                 
     void  Clear();                                    
     void  Swap(ImGuiSelectionBasicStorage& r);        
     void  SetItemSelected(ImGuiID id, bool selected); 
     bool  GetNextSelectedItem(void** opaque_it, ImGuiID* out_id); 
    inline ImGuiID  GetStorageIdFromIndex(int idx)              { return AdapterIndexToStorageId(this, idx); }  
};
struct ImGuiSelectionExternalStorage
{
    void*           UserData;       
    void            (*AdapterSetItemSelected)(ImGuiSelectionExternalStorage* self, int idx, bool selected); 
     ImGuiSelectionExternalStorage();
     void  ApplyRequests(ImGuiMultiSelectIO* ms_io);   
};
typedef unsigned short ImDrawIdx;   
typedef void (*ImDrawCallback)(const ImDrawList* parent_list, const ImDrawCmd* cmd);
struct ImDrawCmd
{
    ImVec4          ClipRect;           
    ImTextureRef    TexRef;             
    unsigned int    VtxOffset;          
    unsigned int    IdxOffset;          
    unsigned int    ElemCount;          
    ImDrawCallback  UserCallback;       
    void*           UserCallbackData;   
    int             UserCallbackDataSize;  
    int             UserCallbackDataOffset;
    ImDrawCmd()     { memset((void*)this, 0, sizeof(*this)); } 
    inline ImTextureID GetTexID() const;    
};
struct ImDrawVert
{
    ImVec2  pos;
    ImVec2  uv;
    ImU32   col;
    ImU32   ext[11];        
};
struct ImDrawCmdHeader
{
    ImVec4          ClipRect;
    ImTextureRef    TexRef;
    unsigned int    VtxOffset;
};
struct ImDrawChannel
{
    ImVector<ImDrawCmd>         _CmdBuffer;
    ImVector<ImDrawIdx>         _IdxBuffer;
};
struct ImDrawListSplitter
{
    int                         _Current;    
    int                         _Count;      
    ImVector<ImDrawChannel>     _Channels;   
    inline ImDrawListSplitter()  { memset((void*)this, 0, sizeof(*this)); }
    inline ~ImDrawListSplitter() { ClearFreeMemory(); }
    inline void                 Clear() { _Current = 0; _Count = 1; } 
     void              ClearFreeMemory();
     void              Split(ImDrawList* draw_list, int count);
     void              Merge(ImDrawList* draw_list);
     void              SetCurrentChannel(ImDrawList* draw_list, int channel_idx);
};
enum ImDrawFlags_
{
    ImDrawFlags_None                    = 0,
    ImDrawFlags_RoundTopLeft            = 1 << 4,   
    ImDrawFlags_RoundTopRight           = 1 << 5,   
    ImDrawFlags_RoundBottomLeft         = 1 << 6,   
    ImDrawFlags_RoundBottomRight        = 1 << 7,   
    ImDrawFlags_RoundNone               = 1 << 8,   
    ImDrawFlags_RoundAll                = ImDrawFlags_RoundTopLeft | ImDrawFlags_RoundTopRight | ImDrawFlags_RoundBottomLeft | ImDrawFlags_RoundBottomRight, 
    ImDrawFlags_RoundTop                = ImDrawFlags_RoundTopLeft | ImDrawFlags_RoundTopRight,
    ImDrawFlags_RoundBottom             = ImDrawFlags_RoundBottomLeft | ImDrawFlags_RoundBottomRight,
    ImDrawFlags_RoundLeft               = ImDrawFlags_RoundBottomLeft | ImDrawFlags_RoundTopLeft,
    ImDrawFlags_RoundRight              = ImDrawFlags_RoundBottomRight | ImDrawFlags_RoundTopRight,
    ImDrawFlags_Closed                  = 1 << 9,   
    ImDrawFlags_JoinMiter               = 1 << 10,  
    ImDrawFlags_CapSquare               = 1 << 11,  
    ImDrawFlags_AAFill                  = 1 << 12,  
    ImDrawFlags_AALines                 = 1 << 13,  
    ImDrawFlags_AALineEnds              = 1 << 14,  
    ImDrawFlags_StrokeInside            = 1 << 17,  
    ImDrawFlags_StrokeCenter            = 2 << 17,  
    ImDrawFlags_StrokeCenterBiased      = 3 << 17,  
    ImDrawFlags_StrokeOutside           = 4 << 17,  
    ImDrawFlags_StrokeLegacy            = 7 << 17,  
    ImDrawFlags_TextNoPixelSnap         = 1 << 20,  
    ImDrawFlags_UseTexForRoundCorners   = 1 << 21,  
    ImDrawFlags_UseVtxOffset            = 1 << 22,  
    ImDrawFlags_AllowTexForRoundCorners_= 1 << 23,  
    ImDrawFlags_RoundMask_              = ImDrawFlags_RoundAll | ImDrawFlags_RoundNone, 
    ImDrawFlags_AllowInPushScope_       = ImDrawFlags_AAFill | ImDrawFlags_AALines | ImDrawFlags_AALineEnds | ImDrawFlags_StrokeLegacy | ImDrawFlags_TextNoPixelSnap | ImDrawFlags_UseTexForRoundCorners | ImDrawFlags_UseVtxOffset | ImDrawFlags_RoundMask_, 
    ImDrawFlags_AllowInFrameScope_      = ImDrawFlags_AllowInPushScope_ | ImDrawFlags_AllowTexForRoundCorners_,
    ImDrawFlags_StrokeMask_             = 0x07 << 17,              
    ImDrawFlags_InvalidMask_            = ~0x7FFFFFF0,             
};
struct ImDrawList
{
    ImVector<ImDrawCmd>     CmdBuffer;          
    ImVector<ImDrawIdx>     IdxBuffer;          
    ImVector<ImDrawVert>    VtxBuffer;          
    ImDrawFlags             Flags;              
    unsigned int            _VtxCurrentIdx;     
    ImDrawListSharedData*   _Data;              
    ImDrawVert*             _VtxWritePtr;       
    ImDrawIdx*              _IdxWritePtr;       
    ImVector<ImVec2>        _Path;              
    ImDrawCmdHeader         _CmdHeader;         
    ImDrawListSplitter      _Splitter;          
    ImVector<ImVec4>        _ClipRectStack;     
    ImVector<ImTextureRef>  _TextureStack;      
    ImVector<ImU8>          _CallbacksDataBuf;  
    ImSmallStack_<ImDrawFlags,3> _DrawFlagsStack;
    float                   _FringeScale;       
    float                   _InvFringeScale;    
    bool                    _FringeScaleIsInteger;  
    const char*             _OwnerName;         
     ImDrawList(ImDrawListSharedData* shared_data);
     ~ImDrawList();
     void  PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect = false);  
     void  PushClipRectFullScreen();
     void  PopClipRect();
     void  PushTexture(ImTextureRef tex_ref);
     void  PopTexture();
     void  PushDrawFlag(ImDrawFlags flags, bool enabled); 
     void  PopDrawFlag();
    inline ImVec2   GetClipRectMin() const { const ImVec4& cr = _ClipRectStack.back(); return ImVec2(cr.x, cr.y); }
    inline ImVec2   GetClipRectMax() const { const ImVec4& cr = _ClipRectStack.back(); return ImVec2(cr.z, cr.w); }
     void  AddLine(const ImVec2& p1, const ImVec2& p2, ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddLineH(float min_x, float max_x, float y, ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddLineV(float x, float min_y, float max_y, ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddRect(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding = 0.0f, float thickness = 1.0f, ImDrawFlags flags = 0);   
     void  AddRectFilled(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding = 0.0f, ImDrawFlags flags = 0);                     
     void  AddRectFilledMultiColor(const ImVec2& p_min, const ImVec2& p_max, ImU32 col_upr_left, ImU32 col_upr_right, ImU32 col_bot_right, ImU32 col_bot_left);
     void  AddQuad(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddQuadFilled(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, ImU32 col);
     void  AddTriangle(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddTriangleFilled(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, ImU32 col);
     void  AddCircle(const ImVec2& center, float radius, ImU32 col, int num_segments = 0, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddCircleFilled(const ImVec2& center, float radius, ImU32 col, int num_segments = 0);
     void  AddNgon(const ImVec2& center, float radius, ImU32 col, int num_segments, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddNgonFilled(const ImVec2& center, float radius, ImU32 col, int num_segments);
     void  AddEllipse(const ImVec2& center, const ImVec2& radius, ImU32 col, float rot = 0.0f, int num_segments = 0, float thickness = 1.0f, ImDrawFlags flags = 0);
     void  AddEllipseFilled(const ImVec2& center, const ImVec2& radius, ImU32 col, float rot = 0.0f, int num_segments = 0);
     void  AddText(const ImVec2& pos, ImU32 col, const char* text_begin, const char* text_end = ((void *)0));
     void  AddText(ImFont* font, float font_size, const ImVec2& pos, ImU32 col, const char* text_begin, const char* text_end = ((void *)0), float wrap_width = 0.0f, const ImVec4* cpu_fine_clip_rect = ((void *)0));
     void  AddBezierCubic(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, ImU32 col, float thickness, int num_segments = 0, ImDrawFlags flags = 0); 
     void  AddBezierQuadratic(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, ImU32 col, float thickness, int num_segments = 0, ImDrawFlags flags = 0);               
    inline    void  AddPolyline(const ImVec2* points, int num_points, ImU32 col, float thickness, ImDrawFlags flags = 0) { _AddPolyline(points, num_points, col, thickness, flags, 3.402823466e+38F); }
     void  AddConvexPolyFilled(const ImVec2* points, int num_points, ImU32 col, ImDrawFlags flags = 0);
     void  AddConcavePolyFilled(const ImVec2* points, int num_points, ImU32 col);
     void  AddImage(ImTextureRef tex_ref, const ImVec2& p_min, const ImVec2& p_max, const ImVec2& uv_min = ImVec2(0, 0), const ImVec2& uv_max = ImVec2(1, 1), ImU32 col = (((ImU32)(255)<<24) | ((ImU32)(255)<<16) | ((ImU32)(255)<<8) | ((ImU32)(255)<<0)));
     void  AddImageQuad(ImTextureRef tex_ref, const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, const ImVec2& uv1 = ImVec2(0, 0), const ImVec2& uv2 = ImVec2(1, 0), const ImVec2& uv3 = ImVec2(1, 1), const ImVec2& uv4 = ImVec2(0, 1), ImU32 col = (((ImU32)(255)<<24) | ((ImU32)(255)<<16) | ((ImU32)(255)<<8) | ((ImU32)(255)<<0)));
     void  AddImageRounded(ImTextureRef tex_ref, const ImVec2& p_min, const ImVec2& p_max, const ImVec2& uv_min, const ImVec2& uv_max, ImU32 col, float rounding, ImDrawFlags flags = 0);
    inline    void  PathClear()                                                 { _Path.Size = 0; }
    inline    void  PathLineTo(const ImVec2& pos)                               { _Path.push_back(pos); }
    inline    void  PathLineToMergeDuplicate(const ImVec2& pos)                 { if (_Path.Size == 0 || memcmp(&_Path.Data[_Path.Size - 1], &pos, 8) != 0) _Path.push_back(pos); }
    inline    void  PathFillConvex(ImU32 col, ImDrawFlags flags = 0)            { AddConvexPolyFilled(_Path.Data, _Path.Size, col, flags); _Path.Size = 0; }
    inline    void  PathFillConcave(ImU32 col)                                  { AddConcavePolyFilled(_Path.Data, _Path.Size, col); _Path.Size = 0; }
    inline    void  PathStroke(ImU32 col, float thickness = 1.0f, ImDrawFlags flags = 0) { _AddPolyline(_Path.Data, _Path.Size, col, thickness, flags, 3.402823466e+38F); _Path.Size = 0; }
     void  PathArcTo(const ImVec2& center, float radius, float a_min, float a_max, int num_segments = 0);
     void  PathArcToFast(const ImVec2& center, float radius, int a_min_of_12, int a_max_of_12);                
     void  PathEllipticalArcTo(const ImVec2& center, const ImVec2& radius, float rot, float a_min, float a_max, int num_segments = 0); 
     void  PathBezierCubicCurveTo(const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, int num_segments = 0); 
     void  PathBezierQuadraticCurveTo(const ImVec2& p2, const ImVec2& p3, int num_segments = 0);               
     void  PathRect(const ImVec2& rect_min, const ImVec2& rect_max, float rounding = 0.0f, ImDrawFlags flags = 0);
     void  AddCallback(ImDrawCallback callback, void* userdata = ((void *)0), size_t userdata_size = 0);
     void  AddDrawCmd();                                               
     ImDrawList* CloneOutput() const;                                  
    inline void     ChannelsSplit(int count)    { _Splitter.Split(this, count); }
    inline void     ChannelsMerge()             { _Splitter.Merge(this); }
    inline void     ChannelsSetCurrent(int n)   { _Splitter.SetCurrentChannel(this, n); }
     void  PrimReserve(int idx_count, int vtx_count);
     void  PrimUnreserve(int idx_count, int vtx_count);
     void  PrimRect(const ImVec2& a, const ImVec2& b, ImU32 col);      
     void  PrimRectUV(const ImVec2& a, const ImVec2& b, const ImVec2& uv_a, const ImVec2& uv_b, ImU32 col);
     void  PrimQuadUV(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, const ImVec2& uv_a, const ImVec2& uv_b, const ImVec2& uv_c, const ImVec2& uv_d, ImU32 col);
    inline    void  PrimWriteVtx(const ImVec2& pos, const ImVec2& uv, ImU32 col)    { _VtxWritePtr->pos = pos; _VtxWritePtr->uv = uv; _VtxWritePtr->col = col; _VtxWritePtr++; _VtxCurrentIdx++; }
    inline    void  PrimWriteIdx(ImDrawIdx idx)                                     { *_IdxWritePtr = idx; _IdxWritePtr++; }
    inline    void  PrimVtx(const ImVec2& pos, const ImVec2& uv, ImU32 col)         { PrimWriteIdx((ImDrawIdx)_VtxCurrentIdx); PrimWriteVtx(pos, uv, col); } 
              void  AddRect(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding , ImDrawFlags flags , float thickness ) = delete;
              void  AddPolyline(const ImVec2* points, int num_points, ImU32 col, ImDrawFlags flags, float thickness) = delete;
    inline    void  PathStroke(ImU32 col, ImDrawFlags flags , float thickness ) = delete;
     void  _SetDrawListSharedData(ImDrawListSharedData* data);
     void  _ResetForNewFrame();
     void  _SetPixelDensity(float pixel_density);
     void  _ClearFreeMemory();
     void  _PopUnusedDrawCmd();
     void  _TryMergeDrawCmds();
     void  _OnChangedClipRect();
     void  _OnChangedTexture();
     void  _OnChangedVtxOffset();
     void  _SetTexture(ImTextureRef tex_ref);
     int   _CalcCircleAutoSegmentCount(float radius) const;
     void  _PathArcToFastEx(const ImVec2& center, float radius, int a_min_sample, int a_max_sample, int a_step);
     void  _PathArcToN(const ImVec2& center, float radius, float a_min, float a_max, int num_segments);
     void  _AddRectFilledBaked(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float r, const ImVec4& tex_uvs, ImDrawFlags flags);
     void  _AddRectBaked(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float r, float t, const ImVec4& tex_uvs, ImDrawFlags flags);
     void  _AddLine(const ImVec2& p1, const ImVec2& p2, ImU32 col, float thickness, ImDrawFlags flags);
     void  _AddRectTinyRounding(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding, float thickness, ImDrawFlags flags);
     void  _SelectLineTexture(float screen_thickness, ImVec2* out_uv0, ImVec2* out_uv1, float* out_fringe, ImDrawFlags flags);
     float _CalculateCenterBiasedOffset(float thickness);
     void  _AddPolyline(const ImVec2* points, int num_points, ImU32 col, float thickness, ImDrawFlags flags, float max_inner_offset);
};
struct ImDrawData
{
    bool                Valid;              
    int                 FrameCount;         
    int                 TotalIdxCount;      
    int                 TotalVtxCount;      
    ImVector<ImDrawList*> CmdLists;         
    ImVec2              DisplayPos;         
    ImVec2              DisplaySize;        
    ImVec2              FramebufferScale;   
    ImGuiViewport*      OwnerViewport;      
    ImVector<ImTextureData*>* Textures;     
    ImDrawData()    { Clear(); }
     void  Clear();
     void  AddDrawList(ImDrawList* draw_list);     
     void  DeIndexAllBuffers();                    
     void  ScaleClipRects(const ImVec2& fb_scale); 
};
enum ImTextureFormat
{
    ImTextureFormat_RGBA32,         
    ImTextureFormat_Alpha8,         
};
enum ImTextureStatus
{
    ImTextureStatus_OK,
    ImTextureStatus_Destroyed,      
    ImTextureStatus_WantCreate,     
    ImTextureStatus_WantUpdates,    
    ImTextureStatus_WantDestroy,    
};
struct ImTextureRect
{
    unsigned short      x, y;       
    unsigned short      w, h;       
};
struct ImTextureData
{
    int                 UniqueID;               
    ImTextureStatus     Status;                 
    void*               BackendUserData;        
    void*               QueueUserData;          
    ImTextureID         TexID;                  
    ImTextureFormat     Format;                 
    int                 Width;                  
    int                 Height;                 
    int                 BytesPerPixel;          
    unsigned char*      Pixels;                 
    ImTextureRect       UsedRect;               
    ImTextureRect       UpdateRect;             
    ImVector<ImTextureRect> Updates;            
    int                 UnusedFrames;           
    unsigned short      RefCount;               
    bool                UseColors;              
    bool                WantDestroyNextFrame;   
    ImTextureData()     { memset((void*)this, 0, sizeof(*this)); Status = ImTextureStatus_Destroyed; TexID = ((ImTextureID)0); }
    ~ImTextureData()    { DestroyPixels(); }
     void      Create(ImTextureFormat format, int w, int h);
     void      DestroyPixels();
    void*               GetPixels()                 { ((void)( (!!(Pixels != ((void *)0))) || (_wassert(L"Pixels != ((void *)0)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(3844)), 0)) ); return Pixels; }
    void*               GetPixelsAt(int x, int y)   { ((void)( (!!(Pixels != ((void *)0))) || (_wassert(L"Pixels != ((void *)0)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(3845)), 0)) ); return Pixels + (x + y * Width) * BytesPerPixel; }
    int                 GetSizeInBytes() const      { return Width * Height * BytesPerPixel; }
    int                 GetPitch() const            { return Width * BytesPerPixel; }
    ImTextureRef        GetTexRef()                 { ImTextureRef tex_ref; tex_ref._TexData = this; tex_ref._TexID = ((ImTextureID)0); return tex_ref; }
    ImTextureID         GetTexID() const            { return TexID; }
    void    SetTexID(ImTextureID tex_id)            { TexID = tex_id; }
    void    SetStatus(ImTextureStatus status)       { Status = status; if (status == ImTextureStatus_Destroyed && !WantDestroyNextFrame && Pixels != nullptr) Status = ImTextureStatus_WantCreate; }
};
inline ImTextureID ImTextureRef::GetTexID() const
{
    ((void)( (!!(!(_TexData != ((void *)0) && _TexID != ((ImTextureID)0)))) || (_wassert(L"!(_TexData != ((void *)0) && _TexID != ((ImTextureID)0))", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(4239)), 0)) );
    return _TexData ? _TexData->TexID : _TexID;
}
inline ImTextureID ImDrawCmd::GetTexID() const
{
    ImTextureID tex_id = TexRef._TexData ? TexRef._TexData->TexID : TexRef._TexID; 
    if (TexRef._TexData != ((void *)0))
        ((void)( (!!(tex_id != ((ImTextureID)0) && "ImDrawCmd is referring to ImTextureData that wasn't uploaded to graphics system. Backend must call ImTextureData::SetTexID() after handling ImTextureStatus_WantCreate request!")) || (_wassert(L"tex_id != ((ImTextureID)0) && \"ImDrawCmd is referring to ImTextureData that wasn't uploaded to graphics system. Backend must call ImTextureData::SetTexID() after handling ImTextureStatus_WantCreate request!\"", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(4252)), 0)) );
    return tex_id;
}
enum ImGuiViewportFlags_
{
    ImGuiViewportFlags_None                     = 0,
    ImGuiViewportFlags_IsPlatformWindow         = 1 << 0,   
    ImGuiViewportFlags_IsPlatformMonitor        = 1 << 1,   
    ImGuiViewportFlags_OwnedByApp               = 1 << 2,   
    ImGuiViewportFlags_NoDecoration             = 1 << 3,   
    ImGuiViewportFlags_NoTaskBarIcon            = 1 << 4,   
    ImGuiViewportFlags_NoFocusOnAppearing       = 1 << 5,   
    ImGuiViewportFlags_NoFocusOnClick           = 1 << 6,   
    ImGuiViewportFlags_NoInputs                 = 1 << 7,   
    ImGuiViewportFlags_NoRendererClear          = 1 << 8,   
    ImGuiViewportFlags_NoAutoMerge              = 1 << 9,   
    ImGuiViewportFlags_TopMost                  = 1 << 10,  
    ImGuiViewportFlags_CanHostOtherWindows      = 1 << 11,  
    ImGuiViewportFlags_IsMinimized              = 1 << 12,  
    ImGuiViewportFlags_IsFocused                = 1 << 13,  
};
struct ImGuiViewport
{
    ImGuiID             ID;                     
    ImGuiViewportFlags  Flags;                  
    ImVec2              Pos;                    
    ImVec2              Size;                   
    ImVec2              FramebufferScale;       
    ImVec2              WorkPos;                
    ImVec2              WorkSize;               
    float               DpiScale;               
    ImGuiID             ParentViewportId;       
    ImGuiViewport*      ParentViewport;         
    ImDrawData*         DrawData;               
    void*               RendererUserData;       
    void*               PlatformUserData;       
    void*               PlatformIconData;       
    void*               PlatformHandle;         
    void*               PlatformHandleRaw;      
    bool                PlatformWindowCreated;  
    bool                PlatformRequestMove;    
    bool                PlatformRequestResize;  
    bool                PlatformRequestClose;   
    ImGuiViewport()     { memset((void*)this, 0, sizeof(*this)); }
    ~ImGuiViewport()    { ((void)( (!!(PlatformUserData == ((void *)0) && RendererUserData == ((void *)0))) || (_wassert(L"PlatformUserData == ((void *)0) && RendererUserData == ((void *)0)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui.h", (unsigned)(4319)), 0)) ); }
    ImVec2              GetCenter() const       { return ImVec2(Pos.x + Size.x * 0.5f, Pos.y + Size.y * 0.5f); }
    ImVec2              GetWorkCenter() const   { return ImVec2(WorkPos.x + WorkSize.x * 0.5f, WorkPos.y + WorkSize.y * 0.5f); }
     const char* GetDebugName() const;
};
struct ImGuiPlatformIO
{
     ImGuiPlatformIO();
    const char* (*Platform_GetClipboardTextFn)(ImGuiContext* ctx);                      
    void        (*Platform_SetClipboardTextFn)(ImGuiContext* ctx, const char* text);
    void*       Platform_ClipboardUserData;
    bool        (*Platform_OpenInShellFn)(ImGuiContext* ctx, const char* path);
    void*       Platform_OpenInShellUserData;
    void        (*Platform_SetImeDataFn)(ImGuiContext* ctx, ImGuiViewport* viewport, ImGuiPlatformImeData* data);
    void*       Platform_ImeUserData;
    ImWchar     Platform_LocaleDecimalPoint;    
    int         Platform_SessionDate;           
    int         Renderer_TextureMaxWidth;
    int         Renderer_TextureMaxHeight;
    void*       Renderer_RenderState;
    ImDrawCallback  DrawCallback_ResetRenderState;      
    ImDrawCallback  DrawCallback_SetSamplerLinear;      
    ImDrawCallback  DrawCallback_SetSamplerNearest;     
    ImDrawCallback  DrawCallback_SetSamplerFromTex;     
    void    (*Platform_CreateWindow)(ImGuiViewport* vp);                    
    void    (*Platform_DestroyWindow)(ImGuiViewport* vp);                   
    void    (*Platform_ShowWindow)(ImGuiViewport* vp);                      
    void    (*Platform_SetWindowPos)(ImGuiViewport* vp, ImVec2 pos);        
    ImVec2  (*Platform_GetWindowPos)(ImGuiViewport* vp);                    
    void    (*Platform_SetWindowSize)(ImGuiViewport* vp, ImVec2 size);      
    ImVec2  (*Platform_GetWindowSize)(ImGuiViewport* vp);                   
    ImVec2  (*Platform_GetWindowFramebufferScale)(ImGuiViewport* vp);       
    void    (*Platform_SetWindowFocus)(ImGuiViewport* vp);                  
    bool    (*Platform_GetWindowFocus)(ImGuiViewport* vp);                  
    bool    (*Platform_GetWindowMinimized)(ImGuiViewport* vp);              
    void    (*Platform_SetWindowTitle)(ImGuiViewport* vp, const char* str); 
    void    (*Platform_SetWindowAlpha)(ImGuiViewport* vp, float alpha);     
    void    (*Platform_UpdateWindow)(ImGuiViewport* vp);                    
    void    (*Platform_RenderWindow)(ImGuiViewport* vp, void* render_arg);  
    void    (*Platform_SwapBuffers)(ImGuiViewport* vp, void* render_arg);   
    float   (*Platform_GetWindowDpiScale)(ImGuiViewport* vp);               
    void    (*Platform_OnChangedViewport)(ImGuiViewport* vp);               
    ImVec4  (*Platform_GetWindowWorkAreaInsets)(ImGuiViewport* vp);         
    int     (*Platform_CreateVkSurface)(ImGuiViewport* vp, ImU64 vk_inst, const void* vk_allocators, ImU64* out_vk_surface); 
    void    (*Renderer_CreateWindow)(ImGuiViewport* vp);                    
    void    (*Renderer_DestroyWindow)(ImGuiViewport* vp);                   
    void    (*Renderer_SetWindowSize)(ImGuiViewport* vp, ImVec2 size);      
    void    (*Renderer_RenderWindow)(ImGuiViewport* vp, void* render_arg);  
    void    (*Renderer_SwapBuffers)(ImGuiViewport* vp, void* render_arg);   
    ImVector<ImGuiPlatformMonitor>  Monitors;
    ImVector<ImTextureData*>        Textures;           
    ImVector<ImGuiViewport*>        Viewports;          
     void ClearPlatformHandlers();    
     void ClearRendererHandlers();    
};
struct ImGuiPlatformMonitor
{
    ImVec2  MainPos, MainSize;      
    ImVec2  WorkPos, WorkSize;      
    float   DpiScale;               
    void*   PlatformHandle;         
    ImGuiPlatformMonitor()          { MainPos = MainSize = WorkPos = WorkSize = ImVec2(0, 0); DpiScale = 1.0f; PlatformHandle = ((void *)0); }
};
struct ImGuiPlatformImeData
{
    bool    WantVisible;            
    bool    WantTextInput;          
    ImVec2  InputPos;               
    float   InputLineHeight;        
    ImGuiID ViewportId;             
    ImGuiPlatformImeData()          { memset((void*)this, 0, sizeof(*this)); }
};
struct ImBitVector;                 
struct ImRect;                      
struct ImGuiTextIndex;              
struct ImGuiPackedDate;             
struct ImDrawDataBuilder;           
struct ImDrawListSharedData;        
struct ImFontAtlasBuilder;          
struct ImFontAtlasPostProcessData;  
struct ImFontAtlasRectEntry;        
struct ImGuiBoxSelectState;         
struct ImGuiColorMod;               
struct ImGuiContext;                
struct ImGuiContextHook;            
struct ImGuiDataTypeInfo;           
struct ImGuiDeactivatedItemData;    
struct ImGuiDockContext;            
struct ImGuiDockRequest;            
struct ImGuiDockNode;               
struct ImGuiDockNodeSettings;       
struct ImGuiErrorRecoveryState;     
struct ImGuiGroupData;              
struct ImGuiInputTextState;         
struct ImGuiInputTextDeactivateData;
struct ImGuiLastItemData;           
struct ImGuiLocEntry;               
struct ImGuiMenuColumns;            
struct ImGuiMultiSelectState;       
struct ImGuiMultiSelectTempData;    
struct ImGuiNavItemData;            
struct ImGuiMetricsConfig;          
struct ImGuiNextWindowData;         
struct ImGuiNextItemData;           
struct ImGuiOldColumnData;          
struct ImGuiOldColumns;             
struct ImGuiPopupData;              
struct ImGuiSettingsHandler;        
struct ImGuiStyleMod;               
struct ImGuiStyleVarInfo;           
struct ImGuiTabBar;                 
struct ImGuiTabItem;                
struct ImGuiTable;                  
struct ImGuiTableHeaderData;        
struct ImGuiTableColumn;            
struct ImGuiTableInstanceData;      
struct ImGuiTableTempData;          
struct ImGuiTableSettings;          
struct ImGuiTableColumnsSettings;   
struct ImGuiTreeNodeStackData;      
struct ImGuiTypingSelectState;      
struct ImGuiTypingSelectRequest;    
struct ImGuiWindow;                 
struct ImGuiWindowDockStyle;        
struct ImGuiWindowTempData;         
struct ImGuiWindowSettings;         
struct ImGuiWindowStackData;        
enum ImGuiLocKey : int;                 
typedef unsigned int ImGuiDataAuthority;
typedef int ImGuiLayoutType;            
typedef int ImDrawTextFlags;            
typedef int ImGuiActivateFlags;         
typedef int ImGuiDebugLogFlags;         
typedef int ImGuiFocusRequestFlags;     
typedef int ImGuiItemStatusFlags;       
typedef int ImGuiOldColumnFlags;        
typedef int ImGuiLogFlags;              
typedef int ImGuiNavRenderCursorFlags;  
typedef int ImGuiNavMoveFlags;          
typedef int ImGuiNextItemDataFlags;     
typedef int ImGuiNextWindowDataFlags;   
typedef int ImGuiScrollFlags;           
typedef int ImGuiSeparatorFlags;        
typedef int ImGuiTextFlags;             
typedef int ImGuiTooltipFlags;          
typedef int ImGuiTypingSelectFlags;     
typedef int ImGuiWindowBgClickFlags;    
typedef int ImGuiWindowRefreshFlags;    
typedef ImS16 ImGuiTableColumnIdx;
typedef ImU16 ImGuiTableDrawChannelIdx;
extern  ImGuiContext* GImGui;  
 ImGuiID       ImHashData(const void* data, size_t data_size, ImGuiID seed = 0);
 ImGuiID       ImHashStr(const char* data, size_t data_size = 0, ImGuiID seed = 0);
 const char*   ImHashSkipUncontributingPrefix(const char* label);
inline void             ImQsort(void* base, size_t count, size_t size_of_element, int(__cdecl *compare_func)(void const*, void const*)) { if (count > 1) qsort(base, count, size_of_element, compare_func); }
 ImU32         ImAlphaBlendColors(ImU32 col_a, ImU32 col_b);
inline bool             ImIsPowerOfTwo(int v)               { return v != 0 && (v & (v - 1)) == 0; }
inline bool             ImIsPowerOfTwo(ImU64 v)             { return v != 0 && (v & (v - 1)) == 0; }
inline int              ImUpperPowerOfTwo(int v)            { v--; v |= v >> 1; v |= v >> 2; v |= v >> 4; v |= v >> 8; v |= v >> 16; v++; return v; }
inline unsigned int     ImCountSetBits(unsigned int v)      { unsigned int count = 0; while (v > 0) { v = v & (v - 1); count++; } return count; }
 int           ImStricmp(const char* str1, const char* str2);                      
 int           ImStrnicmp(const char* str1, const char* str2, size_t count);       
 void          ImStrncpy(char* dst, const char* src, size_t count);                
 char*         ImStrdup(const char* str);                                          
 void*         ImMemdup(const void* src, size_t size);                             
 char*         ImStrdupcpy(char* dst, size_t* p_dst_size, const char* str);        
 const char*   ImStrchrRange(const char* str_begin, const char* str_end, char c);  
 const char*   ImStreolRange(const char* str, const char* str_end);                
 const char*   ImStristr(const char* haystack, const char* haystack_end, const char* needle, const char* needle_end);  
 void          ImStrTrimBlanks(char* str);                                         
 const char*   ImStrSkipBlank(const char* str);                                    
 int           ImStrlenW(const ImWchar* str);                                      
 const char*   ImStrbol(const char* buf_mid_line, const char* buf_begin);          
inline char             ImToUpper(char c)               { return (c >= 'a' && c <= 'z') ? c & ~32 : c; }
inline bool             ImCharIsBlankA(char c)          { return c == ' ' || c == '\t'; }
inline bool             ImCharIsBlankW(unsigned int c)  { return c == ' ' || c == '\t' || c == 0x3000; }
inline bool             ImCharIsXdigitA(char c)         { return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'); }
 int           ImFormatString(char* buf, size_t buf_size, const char* fmt, ...) ;
 int           ImFormatStringV(char* buf, size_t buf_size, const char* fmt, va_list args) ;
 void          ImFormatStringToTempBuffer(const char** out_buf, const char** out_buf_end, const char* fmt, ...) ;
 void          ImFormatStringToTempBufferV(const char** out_buf, const char** out_buf_end, const char* fmt, va_list args) ;
 const char*   ImParseFormatFindStart(const char* format);
 const char*   ImParseFormatFindEnd(const char* format);
 const char*   ImParseFormatTrimDecorations(const char* format, char* buf, size_t buf_size);
 void          ImParseFormatSanitizeForPrinting(const char* fmt_in, char* fmt_out, size_t fmt_out_size);
 const char*   ImParseFormatSanitizeForScanning(const char* fmt_in, char* fmt_out, size_t fmt_out_size);
 int           ImParseFormatPrecision(const char* format, int default_value);
 int           ImTextCharToUtf8(char out_buf[5], unsigned int c);                                                      
 int           ImTextStrToUtf8(char* out_buf, int out_buf_size, const ImWchar* in_text, const ImWchar* in_text_end);   
 int           ImTextCharFromUtf8(unsigned int* out_char, const char* in_text, const char* in_text_end);               
 int           ImTextStrFromUtf8(ImWchar* out_buf, int out_buf_size, const char* in_text, const char* in_text_end, const char** in_remaining = ((void *)0));   
 int           ImTextCountCharsFromUtf8(const char* in_text, const char* in_text_end);                                 
 int           ImTextCountUtf8BytesFromChar(const char* in_text, const char* in_text_end);                             
 int           ImTextCountUtf8BytesFromStr(const ImWchar* in_text, const ImWchar* in_text_end);                        
 const char*   ImTextFindPreviousUtf8Codepoint(const char* in_text_start, const char* in_p);                           
 const char*   ImTextFindValidUtf8CodepointEnd(const char* in_text_start, const char* in_text_end, const char* in_p);  
 int           ImTextCountLines(const char* in_text, const char* in_text_end);                                         
enum ImDrawTextFlags_
{
    ImDrawTextFlags_None                = 0,
    ImDrawTextFlags_CpuFineClip         = 1 << 0,    
    ImDrawTextFlags_WrapKeepBlanks      = 1 << 1,
    ImDrawTextFlags_StopOnNewLine       = 1 << 2,
};
typedef FILE* ImFileHandle;
 ImFileHandle      ImFileOpen(const char* filename, const char* mode);
 bool              ImFileClose(ImFileHandle file);
 ImU64             ImFileGetSize(ImFileHandle file);
 ImU64             ImFileRead(void* data, ImU64 size, ImU64 count, ImFileHandle file);
 ImU64             ImFileWrite(const void* data, ImU64 size, ImU64 count, ImFileHandle file);
 void*             ImFileLoadToMemory(const char* filename, const char* mode, size_t* out_file_size = ((void *)0), int padding_bytes = 0);
inline float  ImPow(float x, float y)    { return powf(x, y); }          
inline double ImPow(double x, double y)  { return pow(x, y); }
inline float  ImLog(float x)             { return logf(x); }             
inline double ImLog(double x)            { return log(x); }
inline int    ImAbs(int x)               { return x < 0 ? -x : x; }
inline float  ImAbs(float x)             { return fabsf(x); }
inline double ImAbs(double x)            { return fabs(x); }
inline float  ImSign(float x)            { return (x < 0.0f) ? -1.0f : (x > 0.0f) ? 1.0f : 0.0f; } 
inline double ImSign(double x)           { return (x < 0.0) ? -1.0 : (x > 0.0) ? 1.0 : 0.0; }
inline float  ImRsqrt(float x)           { return _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(x))); }
inline float  ImRsqrtPrecise(float x)    { const float r = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(x))); return r * (1.5f - x * 0.5f * r * r); }
inline double ImRsqrt(double x) { return 1.0 / sqrt(x); }
inline int             ImMin(int lhs, int rhs)                          { return lhs < rhs ? lhs : rhs; }
inline int             ImMax(int lhs, int rhs)                          { return lhs >= rhs ? lhs : rhs; }
inline int             ImClamp(int v, int mn, int mx)                   { return (v < mn) ? mn : (v > mx) ? mx : v; }
inline float           ImMin(float lhs, float rhs)                      { return lhs < rhs ? lhs : rhs; }
inline float           ImMax(float lhs, float rhs)                      { return lhs >= rhs ? lhs : rhs; }
inline float           ImClamp(float v, float mn, float mx)             { return (v < mn) ? mn : (v > mx) ? mx : v; }
template<typename T> T ImMin(T lhs, T rhs)                              { return lhs < rhs ? lhs : rhs; }
template<typename T> T ImMax(T lhs, T rhs)                              { return lhs >= rhs ? lhs : rhs; }
template<typename T> T ImClamp(T v, T mn, T mx)                         { return (v < mn) ? mn : (v > mx) ? mx : v; }
template<typename T> T ImLerp(double a, double b, float t)              { return (T)(a + (b - a) * (double)t); }
template<typename T> T ImLerp(T a, T b, float t)                        { return (T)((float)a + (float)(b - a) * t); }
template<typename T> void ImSwap(T& a, T& b)                            { T tmp = a; a = b; b = tmp; }
template<typename T> T ImAddClampOverflow(T a, T b, T mn, T mx)         { if (b < 0 && (a < mn - b)) return mn; if (b > 0 && (a > mx - b)) return mx; return a + b; }
template<typename T> T ImSubClampOverflow(T a, T b, T mn, T mx)         { if (b > 0 && (a < mn + b)) return mn; if (b < 0 && (a > mx + b)) return mx; return a - b; }
inline ImVec2 ImMin(const ImVec2& lhs, const ImVec2& rhs)               { return ImVec2(lhs.x < rhs.x ? lhs.x : rhs.x, lhs.y < rhs.y ? lhs.y : rhs.y); }
inline ImVec2 ImMax(const ImVec2& lhs, const ImVec2& rhs)               { return ImVec2(lhs.x >= rhs.x ? lhs.x : rhs.x, lhs.y >= rhs.y ? lhs.y : rhs.y); }
inline ImVec2 ImClamp(const ImVec2& v, const ImVec2&mn, const ImVec2&mx){ return ImVec2((v.x < mn.x) ? mn.x : (v.x > mx.x) ? mx.x : v.x, (v.y < mn.y) ? mn.y : (v.y > mx.y) ? mx.y : v.y); }
inline ImVec2 ImLerp(const ImVec2& a, const ImVec2& b, float t)         { return ImVec2(a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t); }
inline ImVec2 ImLerp(const ImVec2& a, const ImVec2& b, const ImVec2& t) { return ImVec2(a.x + (b.x - a.x) * t.x, a.y + (b.y - a.y) * t.y); }
inline ImVec4 ImLerp(const ImVec4& a, const ImVec4& b, float t)         { return ImVec4(a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t, a.z + (b.z - a.z) * t, a.w + (b.w - a.w) * t); }
inline float  ImSaturate(float f)                                       { return (f < 0.0f) ? 0.0f : (f > 1.0f) ? 1.0f : f; }
inline float  ImLengthSqr(const ImVec2& lhs)                            { return (lhs.x * lhs.x) + (lhs.y * lhs.y); }
inline float  ImLengthSqr(const ImVec4& lhs)                            { return (lhs.x * lhs.x) + (lhs.y * lhs.y) + (lhs.z * lhs.z) + (lhs.w * lhs.w); }
inline float  ImInvLength(const ImVec2& lhs, float fail_value)          { float d = (lhs.x * lhs.x) + (lhs.y * lhs.y); if (d > 0.0f) return ImRsqrt(d); return fail_value; }
inline float  ImTrunc(float f)                                          { return (float)(int)(f); } 
inline ImVec2 ImTrunc(const ImVec2& v)                                  { return ImVec2((float)(int)(v.x), (float)(int)(v.y)); }
inline float  ImTrunc64(float f)                                        { return (float)(ImS64)(f); }
inline float  ImFloor(float f)                                          { return (float)((f >= 0 || (float)(int)f == f) ? (int)f : (int)f - 1); } 
inline ImVec2 ImFloor(const ImVec2& v)                                  { return ImVec2(ImFloor(v.x), ImFloor(v.y)); }
inline float  ImRoundPositive(float f)                                  { return (float)(int)(f + 0.5f); } 
inline float  ImRoundPositive64(float f)                                { return (float)(ImS64)(f + 0.5f); } 
inline float  ImRoundSigned(float f)                                    { return (float)(int)(f >= 0.0f ? f + 0.5f : f - 0.5f); }
inline ImVec2 ImRoundSigned(const ImVec2& v)                            { return ImVec2((float)(int)(v.x >= 0.0f ? v.x + 0.5f : v.x - 0.5f), (float)(int)(v.y >= 0.0f ? v.y + 0.5f : v.y - 0.5f)); }
inline float  ImRoundSigned64(float f)                                  { return (float)(ImS64)(f >= 0.0f ? f + 0.5f : f - 0.5f); }
inline float  ImCeilFast(float f)                                       { int i = (int)f; return (float)(i + (f > (float)i)); } 
inline int    ImModPositive(int a, int b)                               { return (a + b) % b; }
inline float  ImDot(const ImVec2& a, const ImVec2& b)                   { return a.x * b.x + a.y * b.y; }
inline ImVec2 ImRotate(const ImVec2& v, float cos_a, float sin_a)       { return ImVec2(v.x * cos_a - v.y * sin_a, v.x * sin_a + v.y * cos_a); }
inline float  ImLinearSweep(float current, float target, float speed)   { if (current < target) return ImMin(current + speed, target); if (current > target) return ImMax(current - speed, target); return current; }
inline float  ImLinearRemapClamp(float s0, float s1, float d0, float d1, float x) { return ImSaturate((x - s0) / (s1 - s0)) * (d1 - d0) + d0; }
inline ImVec2 ImMul(const ImVec2& lhs, const ImVec2& rhs)               { return ImVec2(lhs.x * rhs.x, lhs.y * rhs.y); }
inline bool   ImIsFloatAboveGuaranteedIntegerPrecision(float f)         { return f <= -16777216 || f >= 16777216; }
inline float  ImExponentialMovingAverage(float avg, float sample, int n){ avg -= avg / (float)n; avg += sample / (float)n; return avg; }
inline bool   ImIsTruncated(float x)           { return (float)(int)x == x; }
inline bool   ImIsTruncated4(float x, float y, float z, float w)
{
    __m128 v = _mm_set_ps(x, y, z, w);
    __m128i i = _mm_cvttps_epi32(v);
    return _mm_movemask_ps(_mm_cmpeq_ps(v, _mm_cvtepi32_ps(i))) == 0xF;
}
 ImVec2     ImBezierCubicCalc(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, float t);
 ImVec2     ImBezierCubicClosestPoint(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, const ImVec2& p, int num_segments);        
 ImVec2     ImBezierCubicClosestPointCasteljau(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, const ImVec2& p4, const ImVec2& p, float max_error);
 ImVec2     ImBezierQuadraticCalc(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, float t);
 ImVec2     ImLineClosestPoint(const ImVec2& a, const ImVec2& b, const ImVec2& p);
 bool       ImTriangleContainsPoint(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& p);
 ImVec2     ImTriangleClosestPoint(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& p);
 void       ImTriangleBarycentricCoords(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& p, float& out_u, float& out_v, float& out_w);
inline float         ImTriangleArea(const ImVec2& a, const ImVec2& b, const ImVec2& c)          { return fabsf((a.x * (b.y - c.y)) + (b.x * (c.y - a.y)) + (c.x * (a.y - b.y))) * 0.5f; }
inline bool          ImTriangleIsClockwise(const ImVec2& a, const ImVec2& b, const ImVec2& c)   { return ((b.x - a.x) * (c.y - b.y)) - ((c.x - b.x) * (b.y - a.y)) > 0.0f; }
struct ImVec1
{
    float   x;
     constexpr inline ImVec1()         : x(0.0f) { }
     constexpr inline ImVec1(float _x) : x(_x) { }
};
struct ImVec2i
{
    int         x, y;
     constexpr inline ImVec2i()                             : x(0), y(0) {}
     constexpr inline ImVec2i(int _x, int _y)               : x(_x), y(_y) {}
};
struct ImVec2ih
{
    short   x, y;
     constexpr inline ImVec2ih()                           : x(0), y(0) {}
     constexpr inline ImVec2ih(short _x, short _y)         : x(_x), y(_y) {}
     constexpr inline explicit ImVec2ih(const ImVec2& rhs) : x((short)rhs.x), y((short)rhs.y) {}
};
struct  ImRect
{
    ImVec2      Min;    
    ImVec2      Max;    
     constexpr inline ImRect()                                        : Min(0.0f, 0.0f), Max(0.0f, 0.0f)  {}
     constexpr inline ImRect(const ImVec2& min, const ImVec2& max)    : Min(min), Max(max)                {}
     constexpr inline ImRect(const ImVec4& v)                         : Min(v.x, v.y), Max(v.z, v.w)      {}
     constexpr inline ImRect(float x1, float y1, float x2, float y2)  : Min(x1, y1), Max(x2, y2)          {}
    ImVec2      GetCenter() const                   { return ImVec2((Min.x + Max.x) * 0.5f, (Min.y + Max.y) * 0.5f); }
    ImVec2      GetSize() const                     { return ImVec2(Max.x - Min.x, Max.y - Min.y); }
    float       GetWidth() const                    { return Max.x - Min.x; }
    float       GetHeight() const                   { return Max.y - Min.y; }
    float       GetArea() const                     { return (Max.x - Min.x) * (Max.y - Min.y); }
    ImVec2      GetTL() const                       { return Min; }                   
    ImVec2      GetTR() const                       { return ImVec2(Max.x, Min.y); }  
    ImVec2      GetBL() const                       { return ImVec2(Min.x, Max.y); }  
    ImVec2      GetBR() const                       { return Max; }                   
    bool        Contains(const ImVec2& p) const     { return p.x     >= Min.x && p.y     >= Min.y && p.x     <  Max.x && p.y     <  Max.y; }
    bool        Contains(const ImRect& r) const     { return r.Min.x >= Min.x && r.Min.y >= Min.y && r.Max.x <= Max.x && r.Max.y <= Max.y; }
    bool        ContainsWithPad(const ImVec2& p, const ImVec2& pad) const { return p.x >= Min.x - pad.x && p.y >= Min.y - pad.y && p.x < Max.x + pad.x && p.y < Max.y + pad.y; }
    bool        Overlaps(const ImRect& r) const     { return r.Min.y <  Max.y && r.Max.y >  Min.y && r.Min.x <  Max.x && r.Max.x >  Min.x; }
    void        Add(const ImVec2& p)                { if (Min.x > p.x)     Min.x = p.x;     if (Min.y > p.y)     Min.y = p.y;     if (Max.x < p.x)     Max.x = p.x;     if (Max.y < p.y)     Max.y = p.y; }
    void        Add(const ImRect& r)                { if (Min.x > r.Min.x) Min.x = r.Min.x; if (Min.y > r.Min.y) Min.y = r.Min.y; if (Max.x < r.Max.x) Max.x = r.Max.x; if (Max.y < r.Max.y) Max.y = r.Max.y; }
    void        AddX(float x)                       { if (Min.x > x)       Min.x = x;       if (Max.x < x)       Max.x = x; }
    void        AddY(float y)                       { if (Min.y > y)       Min.y = y;       if (Max.y < y)       Max.y = y; }
    void        Expand(const float amount)          { Min.x -= amount;   Min.y -= amount;   Max.x += amount;   Max.y += amount; }
    void        Expand(const ImVec2& amount)        { Min.x -= amount.x; Min.y -= amount.y; Max.x += amount.x; Max.y += amount.y; }
    void        Translate(const ImVec2& d)          { Min.x += d.x; Min.y += d.y; Max.x += d.x; Max.y += d.y; }
    void        TranslateX(float dx)                { Min.x += dx; Max.x += dx; }
    void        TranslateY(float dy)                { Min.y += dy; Max.y += dy; }
    void        ClipWith(const ImRect& r)           { Min = ImMax(Min, r.Min); Max = ImMin(Max, r.Max); }                   
    void        ClipWithFull(const ImRect& r)       { Min = ImClamp(Min, r.Min, r.Max); Max = ImClamp(Max, r.Min, r.Max); } 
    void        ShrinkClamp(const ImVec2& inset_min, const ImVec2& inset_max) { Min.x = ImMin(Min.x + inset_min.x, Max.x); Min.y = ImMin(Min.y + inset_min.y, Max.y); Max.x = ImMax(Max.x - inset_max.x, Min.x); Max.y = ImMax(Max.y - inset_max.y, Min.y); }
    bool        IsInverted() const                  { return Min.x > Max.x || Min.y > Max.y; }
    ImVec4      ToVec4() const                      { return ImVec4(Min.x, Min.y, Max.x, Max.y); }
    const ImVec4& AsVec4() const                    { return *(const ImVec4*)&Min.x; }
};
inline size_t   ImBitArrayGetStorageSizeInBytes(int bitcount)   { return (size_t)((bitcount + 31) >> 5) << 2; }
inline void     ImBitArrayClearAllBits(ImU32* arr, int bitcount){ memset(arr, 0, ImBitArrayGetStorageSizeInBytes(bitcount)); }
inline bool     ImBitArrayTestBit(const ImU32* arr, int n)      { ImU32 mask = (ImU32)1 << (n & 31); return (arr[n >> 5] & mask) != 0; }
inline void     ImBitArrayClearBit(ImU32* arr, int n)           { ImU32 mask = (ImU32)1 << (n & 31); arr[n >> 5] &= ~mask; }
inline void     ImBitArraySetBit(ImU32* arr, int n)             { ImU32 mask = (ImU32)1 << (n & 31); arr[n >> 5] |= mask; }
inline void     ImBitArraySetBitRange(ImU32* arr, int n, int n2) 
{
    n2--;
    while (n <= n2)
    {
        int a_mod = (n & 31);
        int b_mod = (n2 > (n | 31) ? 31 : (n2 & 31)) + 1;
        ImU32 mask = (ImU32)(((ImU64)1 << b_mod) - 1) & ~(ImU32)(((ImU64)1 << a_mod) - 1);
        arr[n >> 5] |= mask;
        n = (n + 32) & ~31;
    }
}
typedef ImU32* ImBitArrayPtr; 
template<int BITCOUNT, int OFFSET = 0>
struct ImBitArray
{
    ImU32           Data[(BITCOUNT + 31) >> 5];
    ImBitArray()                                { ClearAllBits(); }
    void            ClearAllBits()              { memset(Data, 0, sizeof(Data)); }
    void            SetAllBits()                { memset(Data, 255, sizeof(Data)); }
    bool            TestBit(int n) const        { n += OFFSET; ((void)( (!!(n >= 0 && n < BITCOUNT)) || (_wassert(L"n >= 0 && n < BITCOUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(711)), 0)) ); return ((Data[(n) >> 5] & ((ImU32)1 << ((n) & 31))) != 0); }
    void            SetBit(int n)               { n += OFFSET; ((void)( (!!(n >= 0 && n < BITCOUNT)) || (_wassert(L"n >= 0 && n < BITCOUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(712)), 0)) ); ImBitArraySetBit(Data, n); }
    void            ClearBit(int n)             { n += OFFSET; ((void)( (!!(n >= 0 && n < BITCOUNT)) || (_wassert(L"n >= 0 && n < BITCOUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(713)), 0)) ); ImBitArrayClearBit(Data, n); }
    void            SetBitRange(int n, int n2)  { n += OFFSET; n2 += OFFSET; ((void)( (!!(n >= 0 && n < BITCOUNT && n2 > n && n2 <= BITCOUNT)) || (_wassert(L"n >= 0 && n < BITCOUNT && n2 > n && n2 <= BITCOUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(714)), 0)) ); ImBitArraySetBitRange(Data, n, n2); } 
    bool            operator[](int n) const     { n += OFFSET; ((void)( (!!(n >= 0 && n < BITCOUNT)) || (_wassert(L"n >= 0 && n < BITCOUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(715)), 0)) ); return ((Data[(n) >> 5] & ((ImU32)1 << ((n) & 31))) != 0); }
};
struct  ImBitVector
{
    ImVector<ImU32> Storage;
    void            Create(int sz)              { Storage.resize((sz + 31) >> 5); memset(Storage.Data, 0, (size_t)Storage.Size * sizeof(Storage.Data[0])); }
    void            Clear()                     { Storage.clear(); }
    bool            TestBit(int n) const        { ((void)( (!!(n < (Storage.Size << 5))) || (_wassert(L"n < (Storage.Size << 5)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(725)), 0)) ); return ((Storage.Data[(n) >> 5] & ((ImU32)1 << ((n) & 31))) != 0); }
    void            SetBit(int n)               { ((void)( (!!(n < (Storage.Size << 5))) || (_wassert(L"n < (Storage.Size << 5)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(726)), 0)) ); ImBitArraySetBit(Storage.Data, n); }
    void            ClearBit(int n)             { ((void)( (!!(n < (Storage.Size << 5))) || (_wassert(L"n < (Storage.Size << 5)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(727)), 0)) ); ImBitArrayClearBit(Storage.Data, n); }
};
template<typename T>
struct ImSpan
{
    T*                  Data;
    T*                  DataEnd;
    inline ImSpan()                                 { Data = DataEnd = ((void *)0); }
    inline ImSpan(T* data, int size)                { Data = data; DataEnd = data + size; }
    inline ImSpan(T* data, T* data_end)             { Data = data; DataEnd = data_end; }
    inline void         set(T* data, int size)      { Data = data; DataEnd = data + size; }
    inline void         set(T* data, T* data_end)   { Data = data; DataEnd = data_end; }
    inline void         clear()                     { Data = DataEnd = ((void *)0); }
    inline bool         empty() const               { return Data == DataEnd; }
    inline int          size() const                { return (int)(ptrdiff_t)(DataEnd - Data); }
    inline int          size_in_bytes() const       { return (int)(ptrdiff_t)(DataEnd - Data) * (int)sizeof(T); }
     inline T&        operator[](int i)       { T* p = Data + i; ((void)( (!!(p >= Data && p < DataEnd)) || (_wassert(L"p >= Data && p < DataEnd", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(751)), 0)) ); return *p; }
     inline const T&  operator[](int i) const { const T* p = Data + i; ((void)( (!!(p >= Data && p < DataEnd)) || (_wassert(L"p >= Data && p < DataEnd", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(752)), 0)) ); return *p; }
     inline T*        begin()                 { return Data; }
     inline const T*  begin() const           { return Data; }
     inline T*        end()                   { return DataEnd; }
     inline const T*  end() const             { return DataEnd; }
    inline int  index_from_ptr(const T* it) const   { ((void)( (!!(it >= Data && it < DataEnd)) || (_wassert(L"it >= Data && it < DataEnd", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(759)), 0)) ); const ptrdiff_t off = it - Data; return (int)off; }
};
template<int CHUNKS>
struct ImSpanAllocator
{
    char*   BasePtr;
    int     CurrOff;
    int     CurrIdx;
    int     Offsets[CHUNKS];
    int     Sizes[CHUNKS];
    ImSpanAllocator()                               { memset((void*)this, 0, sizeof(*this)); }
    inline void  Reserve(int n, size_t sz, int a=4) { ((void)( (!!(n == CurrIdx && n < CHUNKS)) || (_wassert(L"n == CurrIdx && n < CHUNKS", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(775)), 0)) ); CurrOff = (((CurrOff) + ((a) - 1)) & ~((a) - 1)); Offsets[n] = CurrOff; Sizes[n] = (int)sz; CurrIdx++; CurrOff += (int)sz; }
    inline int   GetArenaSizeInBytes()              { return CurrOff; }
    inline void  SetArenaBasePtr(void* base_ptr)    { BasePtr = (char*)base_ptr; }
    inline void* GetSpanPtrBegin(int n)             { ((void)( (!!(n >= 0 && n < CHUNKS && CurrIdx == CHUNKS)) || (_wassert(L"n >= 0 && n < CHUNKS && CurrIdx == CHUNKS", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(778)), 0)) ); return (void*)(BasePtr + Offsets[n]); }
    inline void* GetSpanPtrEnd(int n)               { ((void)( (!!(n >= 0 && n < CHUNKS && CurrIdx == CHUNKS)) || (_wassert(L"n >= 0 && n < CHUNKS && CurrIdx == CHUNKS", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(779)), 0)) ); return (void*)(BasePtr + Offsets[n] + Sizes[n]); }
    template<typename T>
    inline void  GetSpan(int n, ImSpan<T>* span)    { span->set((T*)GetSpanPtrBegin(n), (T*)GetSpanPtrEnd(n)); }
};
template<typename T, int BLOCKSIZE>
struct ImStableVector
{
    int                 Size = 0;
    int                 Capacity = 0;
    ImVector<T*>        Blocks;
    inline ~ImStableVector()                        { for (T* block : Blocks) ImGui::MemFree(block); }
    inline void         clear()                     { Size = Capacity = 0; Blocks.clear_delete(); }
    inline void         resize(int new_size)        { if (new_size > Capacity) reserve(new_size); Size = new_size; }
    inline void         reserve(int new_cap)
    {
        new_cap = (((new_cap) + ((BLOCKSIZE) - 1)) & ~((BLOCKSIZE) - 1));
        int old_count = Capacity / BLOCKSIZE;
        int new_count = new_cap / BLOCKSIZE;
        if (new_count <= old_count)
            return;
        Blocks.resize(new_count);
        for (int n = old_count; n < new_count; n++)
            Blocks[n] = (T*)ImGui::MemAlloc(sizeof(T) * BLOCKSIZE);
        Capacity = new_cap;
    }
    inline T&           operator[](int i)           { ((void)( (!!(i >= 0 && i < Size)) || (_wassert(L"i >= 0 && i < Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(812)), 0)) ); return Blocks[i / BLOCKSIZE][i % BLOCKSIZE]; }
    inline const T&     operator[](int i) const     { ((void)( (!!(i >= 0 && i < Size)) || (_wassert(L"i >= 0 && i < Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(813)), 0)) ); return Blocks[i / BLOCKSIZE][i % BLOCKSIZE]; }
    inline T*           push_back(const T& v)       { int i = Size; ((void)( (!!(i >= 0)) || (_wassert(L"i >= 0", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(814)), 0)) ); if (Size == Capacity) reserve(Capacity + BLOCKSIZE); void* ptr = &Blocks[i / BLOCKSIZE][i % BLOCKSIZE]; memcpy(ptr, &v, sizeof(v)); Size++; return (T*)ptr; }
};
typedef int ImPoolIdx;
template<typename T>
struct ImPool
{
    ImVector<T>     Buf;        
    ImGuiStorage    Map;        
    ImPoolIdx       FreeIdx;    
    ImPoolIdx       AliveCount; 
    ImPool()    { FreeIdx = AliveCount = 0; }
    ~ImPool()   { Clear(); }
    T*          GetByKey(ImGuiID key)               { int idx = Map.GetInt(key, -1); return (idx != -1) ? &Buf[idx] : ((void *)0); }
    T*          GetByIndex(ImPoolIdx n)             { return &Buf[n]; }
    ImPoolIdx   GetIndex(const T* p) const          { ((void)( (!!(p >= Buf.Data && p < Buf.Data + Buf.Size)) || (_wassert(L"p >= Buf.Data && p < Buf.Data + Buf.Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(833)), 0)) ); return (ImPoolIdx)(p - Buf.Data); }
    T*          GetOrAddByKey(ImGuiID key)          { int* p_idx = Map.GetIntRef(key, -1); if (*p_idx != -1) return &Buf[*p_idx]; *p_idx = FreeIdx; return Add(); }
    bool        Contains(const T* p) const          { return (p >= Buf.Data && p < Buf.Data + Buf.Size); }
    void        Clear()                             { for (int n = 0; n < Map.Data.Size; n++) { int idx = Map.Data[n].val_i; if (idx != -1) Buf[idx].~T(); } Map.Clear(); Buf.clear(); FreeIdx = AliveCount = 0; }
    T*          Add()                               { int idx = FreeIdx; if (idx == Buf.Size) { Buf.resize(Buf.Size + 1); FreeIdx++; } else { FreeIdx = *(int*)&Buf[idx]; } new(ImNewWrapper(), &Buf[idx]) T(); AliveCount++; return &Buf[idx]; }
    void        Remove(ImGuiID key, const T* p)     { Remove(key, GetIndex(p)); }
    void        Remove(ImGuiID key, ImPoolIdx idx)  { Buf[idx].~T(); *(int*)&Buf[idx] = FreeIdx; FreeIdx = idx; Map.SetInt(key, -1); AliveCount--; }
    void        Reserve(int capacity)               { Buf.reserve(capacity); Map.Data.reserve(capacity); }
    int         GetAliveCount() const               { return AliveCount; }      
    int         GetBufSize() const                  { return Buf.Size; }
    int         GetMapSize() const                  { return Map.Data.Size; }   
    T*          TryGetMapData(ImPoolIdx n)          { int idx = Map.Data[n].val_i; if (idx == -1) return ((void *)0); return GetByIndex(idx); }
};
template<typename T>
struct ImChunkStream
{
    ImVector<char>  Buf;
    void    clear()                     { Buf.clear(); }
    bool    empty() const               { return Buf.Size == 0; }
    int     size() const                { return Buf.Size; }
    T*      alloc_chunk(size_t sz)      { size_t HDR_SZ = 4; sz = (((HDR_SZ + sz) + ((4u) - 1)) & ~((4u) - 1)); int off = Buf.Size; Buf.resize(off + (int)sz); ((int*)(void*)(Buf.Data + off))[0] = (int)sz; return (T*)(void*)(Buf.Data + off + (int)HDR_SZ); }
    T*      begin()                     { size_t HDR_SZ = 4; if (!Buf.Data) return ((void *)0); return (T*)(void*)(Buf.Data + HDR_SZ); }
    T*      next_chunk(T* p)            { size_t HDR_SZ = 4; ((void)( (!!(p >= begin() && p < end())) || (_wassert(L"p >= begin() && p < end()", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(865)), 0)) ); p = (T*)(void*)((char*)(void*)p + chunk_size(p)); if (p == (T*)(void*)((char*)end() + HDR_SZ)) return (T*)0; ((void)( (!!(p < end())) || (_wassert(L"p < end()", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(865)), 0)) ); return p; }
    int     chunk_size(const T* p)      { return ((const int*)p)[-1]; }
    T*      end()                       { return (T*)(void*)(Buf.Data + Buf.Size); }
    int     offset_from_ptr(const T* p) { ((void)( (!!(p >= begin() && p < end())) || (_wassert(L"p >= begin() && p < end()", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(868)), 0)) ); const ptrdiff_t off = (const char*)p - Buf.Data; return (int)off; }
    T*      ptr_from_offset(int off)    { ((void)( (!!(off >= 4 && off < Buf.Size)) || (_wassert(L"off >= 4 && off < Buf.Size", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(869)), 0)) ); return (T*)(void*)(Buf.Data + off); }
    void    swap(ImChunkStream<T>& rhs) { rhs.Buf.swap(Buf); }
};
struct ImGuiTextIndex
{
    ImVector<int>   Offsets;
    int             EndOffset = 0;                          
    void            clear()                                 { Offsets.clear(); EndOffset = 0; }
    int             size()                                  { return Offsets.Size; }
    const char*     get_line_begin(const char* base, int n) { return base + (Offsets.Size != 0 ? Offsets[n] : 0); }
    const char*     get_line_end(const char* base, int n)   { return base + (n + 1 < Offsets.Size ? (Offsets[n + 1] - 1) : EndOffset); }
    void            append(const char* base, int old_size, int new_size);
};
struct ImGuiTextFilterItem
{
    const char*     Begin;              
    int             Len;                
    short           CountInclude;       
    unsigned short  MatchIncludesMask;  
    ImGuiTextFilterItem(const char* b, const char* e) { ((void)( (!!(e > b)) || (_wassert(L"e > b", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(894)), 0)) ); Begin = b; Len = (int)(e - b); CountInclude = 0; MatchIncludesMask = 0; }
};
struct ImGuiPackedDate
{
    ImU16   Year : 7;   
    ImU16   Month : 4;  
    ImU16   Day : 5;    
    ImGuiPackedDate()                           { Year = Month = Day = 0; }
    ImGuiPackedDate(int yyyymmdd)               { Year = (ImU16)((yyyymmdd / 10000) - 2000); Month = (ImU16)((yyyymmdd / 100) % 100); Day = (ImU16)(yyyymmdd % 100); } 
    bool                IsValid()               { return (Year && Month && Day); }
    int                 Unpack() const          { return (Year && Month && Day) ? ((Year + 2000) * 10000) + (Month * 100) + Day : 0; }      
    void                SubtractMonths(int m)   { while (m > 0) { Year -= Month == 1; Month = (Month == 1) ? 12 : Month - 1; m--; } }       
};
 ImGuiStoragePair* ImLowerBound(ImGuiStoragePair* in_begin, ImGuiStoragePair* in_end, ImGuiID key);
struct ImDrawShapeTexUvs
{
    ImVec2          WhitePixel;
    ImVec4          Lines[(32) + 1 + (((4) - 1) * (4) + 1)];   
    ImVec4          Corners[(16) * (4)];     
    ImVec2          MouseCursorsOrigin;         
    ImVec2          TexUvScale;                 
};
enum ImGuiInputTextMove
{
    ImGuiInputTextMove_Left,
    ImGuiInputTextMove_Right,
    ImGuiInputTextMove_Up,
    ImGuiInputTextMove_Down,
    ImGuiInputTextMove_PageUp,
    ImGuiInputTextMove_PageDown,
    ImGuiInputTextMove_LineStart,
    ImGuiInputTextMove_LineEnd,
};
namespace ImGui
{
     float         InputTextCalcCharWidth(ImGuiInputTextState* obj, int line_start_idx, int char_idx, float newline_width);
     bool          InputTextMoveCursor(ImGuiInputTextState* str, ImGuiInputTextMove move, bool shift);   
     void          InputTextClick(ImGuiInputTextState* str, float x, float y, bool drag);              
     float         InputTextCaretX(const char* buf, const char* buf_end, int offset, bool prefer_previous_line, float wrap_width);
     int           InputTextBuildWrappedLineIndex(ImGuiTextIndex* line_index, const char* buf, const char* buf_end, float wrap_width, int max_output_buffer_size); 
     void          InputTextRenderWrapped(ImDrawList* draw_list, ImGuiTextIndex* line_index, const char* buf, const char* buf_end, float wrap_width, int line_n0, int line_n1, const ImVec2& origin, ImU32 col, const ImVec4& clip_rect);
     void          InputTextRenderSelection(ImDrawList* draw_list, ImGuiTextIndex* line_index, const char* buf, const char* buf_end, float wrap_width, int sel_begin, int sel_end, int line_n0, int line_n1, const ImVec2& origin, float offy_up, float offy_dn, float eol_width, const ImRect& clip_rect, ImU32 col);
     void          GetTextDesc(ImTextDesc* out_desc, float wrap_width = 0.0f, ImTextLayoutFlags flags = 0, const ImDrawList* draw_list = ((void *)0));
     ImHRESULT     CreateTextLayout(ImFont* font, const ImTextDesc* desc, const char* text, const char* text_end, ImTextLayout** out_layout);
     ImVec2        CalcTextSizeEx(ImFont* font, const ImTextDesc* desc, const char* text_begin, const char* text_end_display, const char* text_end, const char** out_remaining = ((void *)0), ImVec2* out_offset = ((void *)0));
     const char*   CalcWrappedLineEnd(const char* line_begin, const char* text_end, float wrap_width, ImTextLayoutFlags flags = ImTextLayoutFlags_WrapKeepBlanks);
     void          RenderTextEllipsisEx(ImDrawList* draw_list, const ImVec2& pos_min, const ImVec2& pos_max, float ellipsis_max_x, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImTextTransform* transform, const ImVec2& transformed_pos_min);
    inline ImTextLayoutFlags ConvertDrawTextFlags(ImDrawTextFlags flags) { return ((flags & ImDrawTextFlags_WrapKeepBlanks) ? ImTextLayoutFlags_WrapKeepBlanks : 0) | ((flags & ImDrawTextFlags_StopOnNewLine) ? ImTextLayoutFlags_StopOnNewLine : 0); }
     ImVec2i       GetShapeTexDataSize();
     void          RenderShapeTexData(ImTextureData* tex, ImDrawShapeTexUvs* out_uvs = ((void *)0));
     ImTextureData* CreateShapeTexture(ImDrawListSharedData* shared_data, int width, int height);
     void          DestroyShapeTexture(ImDrawListSharedData* shared_data);
     bool          GetMouseCursorTexData(ImGuiMouseCursor cursor_type, ImVec2* out_offset, ImVec2* out_size, ImVec2 out_uv_border[2], ImVec2 out_uv_fill[2]);
} 
struct  ImDrawListSharedData
{
    ImVec2          TexUvWhitePixel;            
    const ImVec4*   TexUvLines;                 
    const ImVec4*   TexUvCorners;               
    ImFontAtlas*    FontAtlas;                  
    ImFont*         Font;                       
    float           FontSize;                   
    ImDrawShapeTexUvs ShapeTexUvs;              
    ImTextureData*  ShapeTex;                   
    ImTextLayoutFn  TextLayoutFn;               
    ImFontMetricsFn FontMetricsFn;              
    float           FontScale;                  
    float           CurveTessellationMaxError;  
    float           CircleTessellationMaxError; 
    ImDrawFlags     InitialDrawFlags;           
    ImVec4          ClipRectFullscreen;         
    ImVector<ImVec2> TempBuffer;                
    ImVector<ImDrawList*> DrawLists;            
    ImGuiContext*   Context;                    
    ImVec2          ArcFastVtx[(48)]; 
    float           ArcFastRadiusCutoff;                        
    ImU8            CircleSegmentCounts[64];    
    ImDrawListSharedData();
    ~ImDrawListSharedData();
    void SetCircleTessellationMaxError(float max_error);
};
struct ImDrawDataBuilder
{
    ImVector<ImDrawList*>*  Layers[2];      
    ImVector<ImDrawList*>   LayerData1;
    ImDrawDataBuilder()                     { memset((void*)this, 0, sizeof(*this)); }
};
struct ImFontStackData
{
    ImFont*     Font;
    float       FontSizeBeforeScaling;      
    float       FontSizeAfterScaling;       
};
struct ImGuiStyleVarInfo
{
    ImU32           Count : 8;      
    ImGuiDataType   DataType : 8;
    ImU32           Offset : 16;    
    void* GetVarPtr(void* parent) const { return (void*)((unsigned char*)parent + Offset); }
};
struct ImGuiColorMod
{
    ImGuiCol        Col;
    ImVec4          BackupValue;
};
struct ImGuiStyleMod
{
    ImGuiStyleVar   VarIdx;
    union           { int BackupInt[2]; float BackupFloat[2]; };
    ImGuiStyleMod(ImGuiStyleVar idx, int v)     { VarIdx = idx; BackupInt[0] = v; }
    ImGuiStyleMod(ImGuiStyleVar idx, float v)   { VarIdx = idx; BackupFloat[0] = v; }
    ImGuiStyleMod(ImGuiStyleVar idx, ImVec2 v)  { VarIdx = idx; BackupFloat[0] = v.x; BackupFloat[1] = v.y; }
};
struct ImGuiDataTypeStorage
{
    ImU8        Data[8];        
};
struct ImGuiDataTypeInfo
{
    size_t      Size;           
    const char* Name;           
    const char* PrintFmt;       
    const char* ScanFmt;        
};
enum ImGuiDataTypePrivate_
{
    ImGuiDataType_Pointer = ImGuiDataType_COUNT,
    ImGuiDataType_ID,
};
enum ImGuiItemFlagsPrivate_
{
    ImGuiItemFlags_ReadOnly                 = 1 << 11, 
    ImGuiItemFlags_NoWindowHoverableCheck   = 1 << 13, 
    ImGuiItemFlags_AllowOverlap             = 1 << 14, 
    ImGuiItemFlags_NoNavDisableMouseHover   = 1 << 15, 
    ImGuiItemFlags_NoMarkEdited             = 1 << 16, 
    ImGuiItemFlags_NoFocus                  = 1 << 17, 
    ImGuiItemFlags_Inputable                = 1 << 20, 
    ImGuiItemFlags_HasSelectionUserData     = 1 << 21, 
    ImGuiItemFlags_IsMultiSelect            = 1 << 22, 
    ImGuiItemFlags_Default_                 = ImGuiItemFlags_AutoClosePopups | ImGuiItemFlags_LiveEditOnInputText, 
};
enum ImGuiItemStatusFlags_
{
    ImGuiItemStatusFlags_None               = 0,
    ImGuiItemStatusFlags_HoveredRect        = 1 << 0,   
    ImGuiItemStatusFlags_HasDisplayRect     = 1 << 1,   
    ImGuiItemStatusFlags_Edited             = 1 << 2,   
    ImGuiItemStatusFlags_ToggledSelection   = 1 << 3,   
    ImGuiItemStatusFlags_ToggledOpen        = 1 << 4,   
    ImGuiItemStatusFlags_HasDeactivated     = 1 << 5,   
    ImGuiItemStatusFlags_Deactivated        = 1 << 6,   
    ImGuiItemStatusFlags_HoveredWindow      = 1 << 7,   
    ImGuiItemStatusFlags_Visible            = 1 << 8,   
    ImGuiItemStatusFlags_HasClipRect        = 1 << 9,   
    ImGuiItemStatusFlags_HasShortcut        = 1 << 10,  
    ImGuiItemStatusFlags_EditedInternal     = 1 << 11,  
};
enum ImGuiHoveredFlagsPrivate_
{
    ImGuiHoveredFlags_DelayMask_                    = ImGuiHoveredFlags_DelayNone | ImGuiHoveredFlags_DelayShort | ImGuiHoveredFlags_DelayNormal | ImGuiHoveredFlags_NoSharedDelay,
    ImGuiHoveredFlags_AllowedMaskForIsWindowHovered = ImGuiHoveredFlags_ChildWindows | ImGuiHoveredFlags_RootWindow | ImGuiHoveredFlags_AnyWindow | ImGuiHoveredFlags_NoPopupHierarchy | ImGuiHoveredFlags_DockHierarchy | ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_ForTooltip | ImGuiHoveredFlags_Stationary,
    ImGuiHoveredFlags_AllowedMaskForIsItemHovered   = ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_AllowWhenOverlapped | ImGuiHoveredFlags_AllowWhenDisabled | ImGuiHoveredFlags_NoNavOverride | ImGuiHoveredFlags_ForTooltip | ImGuiHoveredFlags_Stationary | ImGuiHoveredFlags_DelayMask_,
};
enum ImGuiInputTextFlagsPrivate_
{
    ImGuiInputTextFlags_Multiline           = 1 << 26,  
    ImGuiInputTextFlags_TempInput           = 1 << 27,  
    ImGuiInputTextFlags_LocalizeDecimalPoint= 1 << 28,  
};
enum ImGuiButtonFlagsPrivate_
{
    ImGuiButtonFlags_PressedOnClick         = 1 << 4,   
    ImGuiButtonFlags_PressedOnClickRelease  = 1 << 5,   
    ImGuiButtonFlags_PressedOnClickReleaseAnywhere = 1 << 6, 
    ImGuiButtonFlags_PressedOnRelease       = 1 << 7,   
    ImGuiButtonFlags_PressedOnDoubleClick   = 1 << 8,   
    ImGuiButtonFlags_PressedOnDragDropHold  = 1 << 9,   
    ImGuiButtonFlags_FlattenChildren        = 1 << 11,  
    ImGuiButtonFlags_AlignTextBaseLine      = 1 << 15,  
    ImGuiButtonFlags_NoKeyModsAllowed       = 1 << 16,  
    ImGuiButtonFlags_NoHoldingActiveId      = 1 << 17,  
    ImGuiButtonFlags_NoNavFocus             = 1 << 18,  
    ImGuiButtonFlags_NoHoveredOnFocus       = 1 << 19,  
    ImGuiButtonFlags_NoSetKeyOwner          = 1 << 20,  
    ImGuiButtonFlags_NoTestKeyOwner         = 1 << 21,  
    ImGuiButtonFlags_NoFocus                = 1 << 22,  
    ImGuiButtonFlags_PressedOnMask_         = ImGuiButtonFlags_PressedOnClick | ImGuiButtonFlags_PressedOnClickRelease | ImGuiButtonFlags_PressedOnClickReleaseAnywhere | ImGuiButtonFlags_PressedOnRelease | ImGuiButtonFlags_PressedOnDoubleClick | ImGuiButtonFlags_PressedOnDragDropHold,
    ImGuiButtonFlags_PressedOnDefault_      = ImGuiButtonFlags_PressedOnClickRelease,
};
enum ImGuiSliderFlagsPrivate_
{
    ImGuiSliderFlags_Vertical               = 1 << 20,  
    ImGuiSliderFlags_ReadOnly               = 1 << 21,  
};
enum ImGuiSelectableFlagsPrivate_
{
    ImGuiSelectableFlags_NoHoldingActiveID      = 1 << 20,
    ImGuiSelectableFlags_SelectOnClick          = 1 << 22,  
    ImGuiSelectableFlags_SelectOnRelease        = 1 << 23,  
    ImGuiSelectableFlags_SpanAvailWidth         = 1 << 24,  
    ImGuiSelectableFlags_SetNavIdOnHover        = 1 << 25,  
    ImGuiSelectableFlags_NoPadWithHalfSpacing   = 1 << 26,  
    ImGuiSelectableFlags_NoSetKeyOwner          = 1 << 27,  
};
enum ImGuiTreeNodeFlagsPrivate_
{
    ImGuiTreeNodeFlags_NoNavFocus                 = 1 << 27,
    ImGuiTreeNodeFlags_ClipLabelForTrailingButton = 1 << 28,
    ImGuiTreeNodeFlags_UpsideDownArrow            = 1 << 29,
    ImGuiTreeNodeFlags_OpenOnMask_                = ImGuiTreeNodeFlags_OpenOnDoubleClick | ImGuiTreeNodeFlags_OpenOnArrow,
    ImGuiTreeNodeFlags_DrawLinesMask_             = ImGuiTreeNodeFlags_DrawLinesNone | ImGuiTreeNodeFlags_DrawLinesFull | ImGuiTreeNodeFlags_DrawLinesToNodes,
};
enum ImGuiSeparatorFlags_
{
    ImGuiSeparatorFlags_None                    = 0,
    ImGuiSeparatorFlags_Horizontal              = 1 << 0,   
    ImGuiSeparatorFlags_Vertical                = 1 << 1,
    ImGuiSeparatorFlags_SpanAllColumns          = 1 << 2,   
};
enum ImGuiFocusRequestFlags_
{
    ImGuiFocusRequestFlags_None                 = 0,
    ImGuiFocusRequestFlags_RestoreFocusedChild  = 1 << 0,   
    ImGuiFocusRequestFlags_UnlessBelowModal     = 1 << 1,   
};
enum ImGuiTextFlags_
{
    ImGuiTextFlags_None                         = 0,
    ImGuiTextFlags_NoWidthForLargeClippedText   = 1 << 0,
};
enum ImGuiTooltipFlags_
{
    ImGuiTooltipFlags_None                      = 0,
    ImGuiTooltipFlags_OverridePrevious          = 1 << 1,   
};
enum ImGuiLayoutType_
{
    ImGuiLayoutType_Horizontal = 0,
    ImGuiLayoutType_Vertical = 1
};
enum ImGuiLogFlags_
{
    ImGuiLogFlags_None = 0,
    ImGuiLogFlags_OutputTTY         = 1 << 0,
    ImGuiLogFlags_OutputFile        = 1 << 1,
    ImGuiLogFlags_OutputBuffer      = 1 << 2,
    ImGuiLogFlags_OutputClipboard   = 1 << 3,
    ImGuiLogFlags_OutputMask_       = ImGuiLogFlags_OutputTTY | ImGuiLogFlags_OutputFile | ImGuiLogFlags_OutputBuffer | ImGuiLogFlags_OutputClipboard,
};
enum ImGuiAxis
{
    ImGuiAxis_None = -1,
    ImGuiAxis_X = 0,
    ImGuiAxis_Y = 1
};
enum ImGuiPlotType
{
    ImGuiPlotType_Lines,
    ImGuiPlotType_Histogram,
};
struct  ImGuiComboPreviewData
{
    ImRect          PreviewRect;
    ImVec2          BackupCursorPos;
    ImVec2          BackupCursorMaxPos;
    ImVec2          BackupCursorPosPrevLine;
    float           BackupPrevLineTextBaseOffset;
    float           BackupWorkRectMaxX;
    float           BackupContentRectMaxX;
    ImGuiLayoutType BackupLayout : 8;
    int             WithinPreview : 2;
    ImGuiComboPreviewData() { memset((void*)this, 0, sizeof(*this)); }
};
struct  ImGuiGroupData
{
    ImGuiID     WindowID;
    ImVec2      BackupCursorPos;
    ImVec2      BackupCursorMaxPos;
    ImVec2      BackupCursorPosPrevLine;
    ImVec1      BackupIndent;
    ImVec1      BackupGroupOffset;
    ImVec2      BackupCurrLineSize;
    float       BackupCurrLineTextBaseOffset;
    ImGuiID     BackupActiveIdIsAlive;
    bool        BackupAnyIdHasBeenEditedThisFrame;
    bool        BackupDeactivatedIdIsAlive;
    bool        BackupHoveredIdIsAlive;
    bool        BackupIsSameLine;
    bool        EmitItem;
};
struct  ImGuiMenuColumns
{
    ImU32       TotalWidth;
    ImU32       NextTotalWidth;
    ImU16       Spacing;
    ImU16       OffsetIcon;         
    ImU16       OffsetLabel;        
    ImU16       OffsetShortcut;
    ImU16       OffsetMark;
    ImU16       Widths[4];          
    ImGuiMenuColumns() { memset((void*)this, 0, sizeof(*this)); }
    void        Update(float spacing, bool window_reappearing);
    float       DeclColumns(float w_icon, float w_label, float w_shortcut, float w_mark);
    void        CalcNextTotalWidth(bool update_offsets);
};
struct  ImGuiInputTextDeactivatedState
{
    ImGuiID            ID;              
    int                ElapseFrame;
    ImVector<char>     TextA;           
    ImGuiInputTextDeactivatedState()    { memset((void*)this, 0, sizeof(*this)); }
    void    ClearFreeMemory()           { ID = 0; ElapseFrame = 0; TextA.clear(); }
};
namespace ImStb { struct STB_TexteditState; }
typedef ImStb::STB_TexteditState ImStbTexteditState;
struct  ImGuiInputTextState
{
    ImGuiContext*           Ctx;                    
    ImStbTexteditState*     Stb;                    
    ImGuiInputTextFlags     Flags;                  
    ImGuiID                 ID;                     
    int                     TextLen;                
    const char*             TextSrc;                
    ImVector<char>          TextA;                  
    ImVector<char>          TextToRevertTo;         
    ImVector<char>          CallbackTextBackup;     
    int                     BufCapacity;            
    ImVec2                  Scroll;                 
    int                     LineCount;              
    float                   WrapWidth;              
    float                   CursorAnim;             
    bool                    CursorFollow;           
    bool                    CursorCenterY;          
    bool                    SelectedAllMouseLock;   
    bool                    EditedBefore;           
    bool                    EditedThisFrame;        
    bool                    ValidatedThisFrame;
    bool                    WantReloadUserBuf;      
    ImS8                    LastMoveDirectionLR;    
    int                     ReloadSelectionStart;
    int                     ReloadSelectionEnd;
    ImGuiInputTextState();
    ~ImGuiInputTextState();
    void        ClearText()                 { TextLen = 0; TextA[0] = 0; CursorClamp(); }
    void        ClearFreeMemory()           { TextA.clear(); TextToRevertTo.clear(); }
    void        OnKeyPressed(int key);      
    void        OnCharPressed(unsigned int c);
    float       GetPreferredOffsetX() const;
    const char* GetText()                   { return TextA.Data ? TextA.Data : ""; }
    void        CursorAnimReset();
    void        CursorClamp();
    bool        HasSelection() const;
    void        ClearSelection();
    int         GetCursorPos() const;
    int         GetSelectionStart() const;
    int         GetSelectionEnd() const;
    void        SetSelection(int start, int end);
    void        SelectAll();
    void        ReloadUserBufAndSelectAll();
    void        ReloadUserBufAndKeepSelection();
    void        ReloadUserBufAndMoveToEnd();
};
enum ImGuiWindowRefreshFlags_
{
    ImGuiWindowRefreshFlags_None                = 0,
    ImGuiWindowRefreshFlags_TryToAvoidRefresh   = 1 << 0,   
    ImGuiWindowRefreshFlags_RefreshOnHover      = 1 << 1,   
    ImGuiWindowRefreshFlags_RefreshOnFocus      = 1 << 2,   
};
enum ImGuiWindowBgClickFlags_
{
    ImGuiWindowBgClickFlags_None                = 0,
    ImGuiWindowBgClickFlags_Move                = 1 << 0,   
};
enum ImGuiNextWindowDataFlags_
{
    ImGuiNextWindowDataFlags_None               = 0,
    ImGuiNextWindowDataFlags_HasPos             = 1 << 0,
    ImGuiNextWindowDataFlags_HasSize            = 1 << 1,
    ImGuiNextWindowDataFlags_HasContentSize     = 1 << 2,
    ImGuiNextWindowDataFlags_HasCollapsed       = 1 << 3,
    ImGuiNextWindowDataFlags_HasSizeConstraint  = 1 << 4,
    ImGuiNextWindowDataFlags_HasFocus           = 1 << 5,
    ImGuiNextWindowDataFlags_HasBgAlpha         = 1 << 6,
    ImGuiNextWindowDataFlags_HasScroll          = 1 << 7,
    ImGuiNextWindowDataFlags_HasWindowFlags     = 1 << 8,
    ImGuiNextWindowDataFlags_HasChildFlags      = 1 << 9,
    ImGuiNextWindowDataFlags_HasRefreshPolicy   = 1 << 10,
    ImGuiNextWindowDataFlags_HasViewport        = 1 << 11,
    ImGuiNextWindowDataFlags_HasDock            = 1 << 12,
    ImGuiNextWindowDataFlags_HasWindowClass     = 1 << 13,
};
struct ImGuiNextWindowData
{
    ImGuiNextWindowDataFlags    HasFlags;
    ImGuiCond                   PosCond;
    ImGuiCond                   SizeCond;
    ImGuiCond                   CollapsedCond;
    ImGuiCond                   DockCond;
    ImVec2                      PosVal;
    ImVec2                      PosPivotVal;
    ImVec2                      SizeVal;
    ImVec2                      ContentSizeVal;
    ImVec2                      ScrollVal;
    ImGuiWindowFlags            WindowFlagsSet;         
    ImGuiWindowFlags            WindowFlagsClear;
    ImGuiChildFlags             ChildFlagsSet;          
    ImGuiChildFlags             ChildFlagsClear;
    bool                        PosUndock;
    bool                        CollapsedVal;
    ImRect                      SizeConstraintRect;
    ImGuiSizeCallback           SizeCallback;
    void*                       SizeCallbackUserData;
    float                       BgAlphaVal;             
    ImGuiID                     ViewportId;
    ImGuiID                     DockId;
    ImGuiWindowClass            WindowClass;
    ImVec2                      MenuBarOffsetMinVal;    
    ImGuiWindowRefreshFlags     RefreshFlagsVal;
    ImGuiNextWindowData()       { memset((void*)this, 0, sizeof(*this)); }
    inline void ClearFlags()    { HasFlags = ImGuiNextWindowDataFlags_None; }
};
enum ImGuiNextItemDataFlags_
{
    ImGuiNextItemDataFlags_None             = 0,
    ImGuiNextItemDataFlags_HasWidth         = 1 << 0,
    ImGuiNextItemDataFlags_HasOpen          = 1 << 1,
    ImGuiNextItemDataFlags_HasShortcut      = 1 << 2,
    ImGuiNextItemDataFlags_HasRefVal        = 1 << 3,
    ImGuiNextItemDataFlags_HasStorageID     = 1 << 4,
    ImGuiNextItemDataFlags_HasColorMarker   = 1 << 5,
};
struct ImGuiNextItemData
{
    ImGuiNextItemDataFlags      HasFlags;           
    ImGuiItemFlags              ItemFlagsSet;       
    ImGuiID                     FocusScopeId;       
    ImGuiSelectionUserData      SelectionUserData;  
    float                       Width;              
    ImGuiKeyChord               Shortcut;           
    ImGuiInputFlags             ShortcutFlags;      
    bool                        OpenVal;            
    ImU8                        OpenCond;           
    ImGuiDataTypeStorage        RefVal;             
    ImGuiID                     StorageId;          
    ImU32                       ColorMarker;        
    ImGuiNextItemData()         { memset((void*)this, 0, sizeof(*this)); SelectionUserData = -1; }
    inline void ClearFlags()    { HasFlags = ImGuiNextItemDataFlags_None; ItemFlagsSet = ImGuiItemFlags_None; } 
};
struct ImGuiLastItemData
{
    ImGuiID                 ID;
    ImGuiItemFlags          ItemFlags;          
    ImGuiItemStatusFlags    StatusFlags;        
    ImRect                  Rect;               
    ImRect                  NavRect;            
    ImRect                  DisplayRect;        
    ImRect                  ClipRect;           
    ImGuiKeyChord           Shortcut;           
    ImGuiLastItemData()     { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiTreeNodeStackData
{
    ImGuiID                 ID;
    ImGuiTreeNodeFlags      TreeFlags;
    ImGuiItemFlags          ItemFlags;      
    ImRect                  NavRect;        
    float                   DrawLinesX1;
    float                   DrawLinesToNodesY2;
    ImGuiTableColumnIdx     DrawLinesTableColumn;
};
struct  ImGuiErrorRecoveryState
{
    short   SizeOfWindowStack;
    short   SizeOfIDStack;
    short   SizeOfTreeStack;
    short   SizeOfColorStack;
    short   SizeOfStyleVarStack;
    short   SizeOfFontStack;
    short   SizeOfFocusScopeStack;
    short   SizeOfGroupStack;
    short   SizeOfItemFlagsStack;
    short   SizeOfBeginPopupStack;
    short   SizeOfDisabledStack;
    ImGuiErrorRecoveryState() { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiWindowStackData
{
    ImGuiWindow*            Window;
    ImGuiLastItemData       ParentLastItemDataBackup;
    ImGuiErrorRecoveryState StackSizesInBegin;          
    bool                    DisabledOverrideReenable;   
    float                   DisabledOverrideReenableAlphaBackup;
    ImRect                  ParentLastComboPreviewRect;
};
struct ImGuiShrinkWidthItem
{
    int         Index;
    float       Width;
    float       InitialWidth;
};
struct ImGuiPtrOrIndex
{
    void*       Ptr;            
    int         Index;          
    ImGuiPtrOrIndex(void* ptr)  { Ptr = ptr; Index = -1; }
    ImGuiPtrOrIndex(int index)  { Ptr = ((void *)0); Index = index; }
};
struct ImGuiDeactivatedItemData
{
    ImGuiID     ID;
    int         ElapseFrame;
    bool        HasBeenEditedBefore;
    bool        IsAlive;
};
enum ImGuiPopupPositionPolicy
{
    ImGuiPopupPositionPolicy_Default,
    ImGuiPopupPositionPolicy_ComboBox,
    ImGuiPopupPositionPolicy_Tooltip,
};
struct ImGuiPopupData
{
    ImGuiID             PopupId;        
    ImGuiWindow*        Window;         
    ImGuiWindow*        RestoreNavWindow;
    int                 ParentNavLayer; 
    int                 OpenFrameCount; 
    ImGuiID             OpenParentId;   
    ImVec2              OpenPopupPos;   
    ImVec2              OpenMousePos;   
    ImGuiPopupData()    { memset((void*)this, 0, sizeof(*this)); ParentNavLayer = OpenFrameCount = -1; }
};
typedef ImBitArray<ImGuiKey_NamedKey_COUNT, -ImGuiKey_NamedKey_BEGIN>    ImBitArrayForNamedKeys;
enum ImGuiInputEventType
{
    ImGuiInputEventType_None = 0,
    ImGuiInputEventType_MousePos,
    ImGuiInputEventType_MouseWheel,
    ImGuiInputEventType_MouseButton,
    ImGuiInputEventType_MouseViewport,
    ImGuiInputEventType_Key,
    ImGuiInputEventType_Text,
    ImGuiInputEventType_Focus,
    ImGuiInputEventType_COUNT
};
enum ImGuiInputSource : int
{
    ImGuiInputSource_None = 0,
    ImGuiInputSource_Mouse,         
    ImGuiInputSource_Keyboard,
    ImGuiInputSource_Gamepad,
    ImGuiInputSource_COUNT
};
struct ImGuiInputEventMousePos      { float PosX, PosY; ImGuiMouseSource MouseSource; };
struct ImGuiInputEventMouseWheel    { float WheelX, WheelY; ImGuiMouseSource MouseSource; };
struct ImGuiInputEventMouseButton   { int Button; bool Down; ImGuiMouseSource MouseSource; };
struct ImGuiInputEventMouseViewport { ImGuiID HoveredViewportID; };
struct ImGuiInputEventKey           { ImGuiKey Key; bool Down; float AnalogValue; };
struct ImGuiInputEventText          { unsigned int Char; };
struct ImGuiInputEventAppFocused    { bool Focused; };
struct ImGuiInputEvent
{
    ImGuiInputEventType             Type;
    ImGuiInputSource                Source;
    ImU32                           EventId;        
    union
    {
        ImGuiInputEventMousePos     MousePos;       
        ImGuiInputEventMouseWheel   MouseWheel;     
        ImGuiInputEventMouseButton  MouseButton;    
        ImGuiInputEventMouseViewport MouseViewport; 
        ImGuiInputEventKey          Key;            
        ImGuiInputEventText         Text;           
        ImGuiInputEventAppFocused   AppFocused;     
    };
    bool                            AddedByTestEngine;
    ImGuiInputEvent() { memset((void*)this, 0, sizeof(*this)); }
};
typedef ImS16 ImGuiKeyRoutingIndex;
struct ImGuiKeyRoutingData
{
    ImGuiKeyRoutingIndex            NextEntryIndex;
    ImU16                           Mods;               
    ImU16                           RoutingCurrScore;   
    ImU16                           RoutingNextScore;   
    ImGuiID                         RoutingCurr;
    ImGuiID                         RoutingNext;
    ImGuiKeyRoutingData()           { NextEntryIndex = -1; Mods = 0; RoutingCurrScore = RoutingNextScore = 0; RoutingCurr = RoutingNext = ((ImGuiID)-1); }
};
struct ImGuiKeyRoutingTable
{
    ImGuiKeyRoutingIndex            Index[ImGuiKey_NamedKey_COUNT]; 
    ImVector<ImGuiKeyRoutingData>   Entries;
    ImVector<ImGuiKeyRoutingData>   EntriesNext;                    
    ImGuiKeyRoutingTable()          { Clear(); }
    void Clear()                    { for (int n = 0; n < ((int)(sizeof(Index) / sizeof(*(Index)))); n++) Index[n] = -1; Entries.clear(); EntriesNext.clear(); }
};
struct ImGuiKeyOwnerData
{
    ImGuiID     OwnerCurr;
    ImGuiID     OwnerNext;
    bool        LockThisFrame;      
    bool        LockUntilRelease;   
    ImGuiKeyOwnerData()             { OwnerCurr = OwnerNext = ((ImGuiID)-1); LockThisFrame = LockUntilRelease = false; }
};
enum ImGuiInputFlagsPrivate_
{
    ImGuiInputFlags_RepeatRateDefault           = 1 << 1,   
    ImGuiInputFlags_RepeatRateNavMove           = 1 << 2,   
    ImGuiInputFlags_RepeatRateNavTweak          = 1 << 3,   
    ImGuiInputFlags_RepeatUntilRelease          = 1 << 4,   
    ImGuiInputFlags_RepeatUntilKeyModsChange    = 1 << 5,   
    ImGuiInputFlags_RepeatUntilKeyModsChangeFromNone = 1 << 6,  
    ImGuiInputFlags_RepeatUntilOtherKeyPress    = 1 << 7,   
    ImGuiInputFlags_LockThisFrame               = 1 << 20,  
    ImGuiInputFlags_LockUntilRelease            = 1 << 21,  
    ImGuiInputFlags_CondHovered                 = 1 << 22,  
    ImGuiInputFlags_CondActive                  = 1 << 23,  
    ImGuiInputFlags_CondDefault_                = ImGuiInputFlags_CondHovered | ImGuiInputFlags_CondActive,
    ImGuiInputFlags_RepeatRateMask_             = ImGuiInputFlags_RepeatRateDefault | ImGuiInputFlags_RepeatRateNavMove | ImGuiInputFlags_RepeatRateNavTweak,
    ImGuiInputFlags_RepeatUntilMask_            = ImGuiInputFlags_RepeatUntilRelease | ImGuiInputFlags_RepeatUntilKeyModsChange | ImGuiInputFlags_RepeatUntilKeyModsChangeFromNone | ImGuiInputFlags_RepeatUntilOtherKeyPress,
    ImGuiInputFlags_RepeatMask_                 = ImGuiInputFlags_Repeat | ImGuiInputFlags_RepeatRateMask_ | ImGuiInputFlags_RepeatUntilMask_,
    ImGuiInputFlags_CondMask_                   = ImGuiInputFlags_CondHovered | ImGuiInputFlags_CondActive,
    ImGuiInputFlags_RouteTypeMask_              = ImGuiInputFlags_RouteActive | ImGuiInputFlags_RouteFocused | ImGuiInputFlags_RouteGlobal | ImGuiInputFlags_RouteAlways,
    ImGuiInputFlags_RouteOptionsMask_           = ImGuiInputFlags_RouteOverFocused | ImGuiInputFlags_RouteOverActive | ImGuiInputFlags_RouteUnlessBgFocused | ImGuiInputFlags_RouteFromRootWindow,
    ImGuiInputFlags_SupportedByIsKeyPressed     = ImGuiInputFlags_RepeatMask_,
    ImGuiInputFlags_SupportedByIsMouseClicked   = ImGuiInputFlags_Repeat,
    ImGuiInputFlags_SupportedByShortcut         = ImGuiInputFlags_RepeatMask_ | ImGuiInputFlags_RouteTypeMask_ | ImGuiInputFlags_RouteOptionsMask_,
    ImGuiInputFlags_SupportedBySetNextItemShortcut = ImGuiInputFlags_RepeatMask_ | ImGuiInputFlags_RouteTypeMask_ | ImGuiInputFlags_RouteOptionsMask_ | ImGuiInputFlags_Tooltip,
    ImGuiInputFlags_SupportedBySetKeyOwner      = ImGuiInputFlags_LockThisFrame | ImGuiInputFlags_LockUntilRelease,
    ImGuiInputFlags_SupportedBySetItemKeyOwner  = ImGuiInputFlags_SupportedBySetKeyOwner | ImGuiInputFlags_CondMask_,
};
struct ImGuiListClipperRange
{
    int     Min;
    int     Max;
    bool    PosToIndexConvert;      
    ImS8    PosToIndexOffsetMin;    
    ImS8    PosToIndexOffsetMax;    
    static ImGuiListClipperRange    FromIndices(int min, int max)                               { ImGuiListClipperRange r = { min, max, false, 0, 0 }; return r; }
    static ImGuiListClipperRange    FromPositions(float y1, float y2, int off_min, int off_max) { ImGuiListClipperRange r = { (int)y1, (int)y2, true, (ImS8)off_min, (ImS8)off_max }; return r; }
};
struct ImGuiListClipperData
{
    ImGuiListClipper*               ListClipper;
    float                           LossynessOffset;
    int                             StepNo;
    int                             ItemsFrozen;
    ImVector<ImGuiListClipperRange> Ranges;
    ImGuiListClipperData()          { memset((void*)this, 0, sizeof(*this)); }
    void                            Reset(ImGuiListClipper* clipper) { ListClipper = clipper; StepNo = ItemsFrozen = 0; Ranges.resize(0); }
};
enum ImGuiActivateFlags_
{
    ImGuiActivateFlags_None                 = 0,
    ImGuiActivateFlags_PreferInput          = 1 << 0,       
    ImGuiActivateFlags_PreferTweak          = 1 << 1,       
    ImGuiActivateFlags_TryToPreserveState   = 1 << 2,       
    ImGuiActivateFlags_FromTabbing          = 1 << 3,       
    ImGuiActivateFlags_FromShortcut         = 1 << 4,       
    ImGuiActivateFlags_FromFocusApi         = 1 << 5,       
};
enum ImGuiScrollFlags_
{
    ImGuiScrollFlags_None                   = 0,
    ImGuiScrollFlags_KeepVisibleEdgeX       = 1 << 0,       
    ImGuiScrollFlags_KeepVisibleEdgeY       = 1 << 1,       
    ImGuiScrollFlags_KeepVisibleCenterX     = 1 << 2,       
    ImGuiScrollFlags_KeepVisibleCenterY     = 1 << 3,       
    ImGuiScrollFlags_AlwaysCenterX          = 1 << 4,       
    ImGuiScrollFlags_AlwaysCenterY          = 1 << 5,       
    ImGuiScrollFlags_NoScrollParent         = 1 << 6,       
    ImGuiScrollFlags_MaskX_                 = ImGuiScrollFlags_KeepVisibleEdgeX | ImGuiScrollFlags_KeepVisibleCenterX | ImGuiScrollFlags_AlwaysCenterX,
    ImGuiScrollFlags_MaskY_                 = ImGuiScrollFlags_KeepVisibleEdgeY | ImGuiScrollFlags_KeepVisibleCenterY | ImGuiScrollFlags_AlwaysCenterY,
};
enum ImGuiNavRenderCursorFlags_
{
    ImGuiNavRenderCursorFlags_None          = 0,
    ImGuiNavRenderCursorFlags_Compact       = 1 << 1,       
    ImGuiNavRenderCursorFlags_AlwaysDraw    = 1 << 2,       
};
enum ImGuiNavMoveFlags_
{
    ImGuiNavMoveFlags_None                  = 0,
    ImGuiNavMoveFlags_LoopX                 = 1 << 0,   
    ImGuiNavMoveFlags_LoopY                 = 1 << 1,
    ImGuiNavMoveFlags_WrapX                 = 1 << 2,   
    ImGuiNavMoveFlags_WrapY                 = 1 << 3,   
    ImGuiNavMoveFlags_WrapMask_             = ImGuiNavMoveFlags_LoopX | ImGuiNavMoveFlags_LoopY | ImGuiNavMoveFlags_WrapX | ImGuiNavMoveFlags_WrapY,
    ImGuiNavMoveFlags_AllowCurrentNavId     = 1 << 4,   
    ImGuiNavMoveFlags_AlsoScoreVisibleSet   = 1 << 5,   
    ImGuiNavMoveFlags_ScrollToEdgeY         = 1 << 6,   
    ImGuiNavMoveFlags_Forwarded             = 1 << 7,
    ImGuiNavMoveFlags_DebugNoResult         = 1 << 8,   
    ImGuiNavMoveFlags_FocusApi              = 1 << 9,   
    ImGuiNavMoveFlags_IsTabbing             = 1 << 10,  
    ImGuiNavMoveFlags_IsPageMove            = 1 << 11,  
    ImGuiNavMoveFlags_Activate              = 1 << 12,  
    ImGuiNavMoveFlags_NoSelect              = 1 << 13,  
    ImGuiNavMoveFlags_NoSetNavCursorVisible = 1 << 14,  
    ImGuiNavMoveFlags_NoClearActiveId       = 1 << 15,  
};
enum ImGuiNavLayer
{
    ImGuiNavLayer_Main  = 0,    
    ImGuiNavLayer_Menu  = 1,    
    ImGuiNavLayer_COUNT
};
struct ImGuiNavItemData
{
    ImGuiWindow*        Window;         
    ImGuiID             ID;             
    ImGuiID             FocusScopeId;   
    ImRect              RectRel;        
    ImGuiItemFlags      ItemFlags;      
    float               DistBox;        
    float               DistCenter;     
    float               DistAxial;      
    ImGuiSelectionUserData SelectionUserData;
    ImGuiNavItemData()  { Clear(); }
    void Clear()        { Window = ((void *)0); ID = FocusScopeId = 0; ItemFlags = 0; SelectionUserData = -1; DistBox = DistCenter = DistAxial = 3.402823466e+38F; }
};
struct ImGuiFocusScopeData
{
    ImGuiID             ID;
    ImGuiID             WindowID;
};
enum ImGuiTypingSelectFlags_
{
    ImGuiTypingSelectFlags_None                 = 0,
    ImGuiTypingSelectFlags_AllowBackspace       = 1 << 0,   
    ImGuiTypingSelectFlags_AllowSingleCharMode  = 1 << 1,   
};
struct  ImGuiTypingSelectRequest
{
    ImGuiTypingSelectFlags  Flags;              
    int                     SearchBufferLen;
    const char*             SearchBuffer;       
    bool                    SelectRequest;      
    bool                    SingleCharMode;     
    ImS8                    SingleCharSize;     
};
struct  ImGuiTypingSelectState
{
    ImGuiTypingSelectRequest Request;           
    char            SearchBuffer[64];           
    ImGuiID         FocusScope;
    int             LastRequestFrame = 0;
    float           LastRequestTime = 0.0f;
    bool            SingleCharModeLock = false; 
    ImGuiTypingSelectState() { memset((void*)this, 0, sizeof(*this)); }
    void            Clear()  { SearchBuffer[0] = 0; SingleCharModeLock = false; } 
};
enum ImGuiOldColumnFlags_
{
    ImGuiOldColumnFlags_None                    = 0,
    ImGuiOldColumnFlags_NoBorder                = 1 << 0,   
    ImGuiOldColumnFlags_NoResize                = 1 << 1,   
    ImGuiOldColumnFlags_NoPreserveWidths        = 1 << 2,   
    ImGuiOldColumnFlags_NoForceWithinWindow     = 1 << 3,   
    ImGuiOldColumnFlags_GrowParentContentsSize  = 1 << 4,   
};
struct ImGuiOldColumnData
{
    float               OffsetNorm;             
    float               OffsetNormBeforeResize;
    ImGuiOldColumnFlags Flags;                  
    ImRect              ClipRect;
    ImGuiOldColumnData() { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiOldColumns
{
    ImGuiID             ID;
    ImGuiOldColumnFlags Flags;
    bool                IsFirstFrame;
    bool                IsBeingResized;
    int                 Current;
    int                 Count;
    float               OffMinX, OffMaxX;       
    float               LineMinY, LineMaxY;
    float               HostCursorPosY;         
    float               HostCursorMaxPosX;      
    ImRect              HostInitialClipRect;    
    ImRect              HostBackupClipRect;     
    ImRect              HostBackupParentWorkRect;
    ImVector<ImGuiOldColumnData> Columns;
    ImDrawListSplitter  Splitter;
    ImGuiOldColumns()   { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiBoxSelectState
{
    ImGuiID                 ID;
    bool                    IsActive;
    bool                    IsStarting;
    bool                    IsStartedFromVoid;  
    bool                    IsStartedSetNavIdOnce;
    bool                    RequestClear;
    ImGuiKeyChord           KeyMods : 16;       
    ImVec2                  StartPosRel;        
    ImVec2                  EndPosRel;          
    ImVec2                  ScrollAccum;        
    ImGuiWindow*            Window;
    bool                    UnclipMode;         
    ImRect                  UnclipRect;         
    ImRect                  UnclipRects[2];     
    ImRect                  BoxSelectRectPrev;  
    ImRect                  BoxSelectRectCurr;
    ImGuiBoxSelectState()   { memset((void*)this, 0, sizeof(*this)); }
};
struct  ImGuiMultiSelectTempData
{
    ImGuiMultiSelectIO      IO;                 
    ImGuiMultiSelectState*  Storage;
    ImGuiID                 FocusScopeId;       
    ImGuiMultiSelectFlags   Flags;
    ImVec2                  ScopeRectMin;
    ImVec2                  BackupCursorMaxPos;
    ImGuiID                 BoxSelectId;
    ImGuiKeyChord           KeyMods;
    ImS8                    LoopRequestSetAll;  
    bool                    IsEndIO;            
    bool                    IsFocused;          
    bool                    IsKeyboardSetRange; 
    bool                    NavIdPassedBy;
    bool                    RangeSrcPassedBy;   
    bool                    RangeDstPassedBy;   
    bool                    IsSoleOrUnknownSelectionSize;
    ImGuiMultiSelectTempData()  { Clear(); }
    void Clear()            { size_t io_sz = sizeof(IO); ClearIO(); memset((void*)(&IO + 1), 0, sizeof(*this) - io_sz); } 
    void ClearIO()          { IO.Requests.resize(0); IO.RangeSrcItem = IO.NavIdItem = ((ImGuiSelectionUserData)-1); IO.NavIdSelected = IO.RangeSrcReset = false; }
};
struct  ImGuiMultiSelectState
{
    ImGuiWindow*            Window;
    ImGuiID                 ID;
    int                     LastFrameActive;    
    int                     LastSelectionSize;  
    ImS8                    RangeSelected;      
    ImS8                    NavIdSelected;      
    ImGuiSelectionUserData  RangeSrcItem;       
    ImGuiSelectionUserData  NavIdItem;          
    ImGuiMultiSelectState() { Window = ((void *)0); ID = 0; LastFrameActive = LastSelectionSize = 0; RangeSelected = NavIdSelected = -1; RangeSrcItem = NavIdItem = ((ImGuiSelectionUserData)-1); }
};
enum ImGuiDockNodeFlagsPrivate_
{
    ImGuiDockNodeFlags_DockSpace                = 1 << 10,  
    ImGuiDockNodeFlags_CentralNode              = 1 << 11,  
    ImGuiDockNodeFlags_NoTabBar                 = 1 << 12,  
    ImGuiDockNodeFlags_HiddenTabBar             = 1 << 13,  
    ImGuiDockNodeFlags_NoWindowMenuButton       = 1 << 14,  
    ImGuiDockNodeFlags_NoCloseButton            = 1 << 15,  
    ImGuiDockNodeFlags_NoResizeX                = 1 << 16,  
    ImGuiDockNodeFlags_NoResizeY                = 1 << 17,  
    ImGuiDockNodeFlags_DockedWindowsInFocusRoute= 1 << 18,  
    ImGuiDockNodeFlags_NoDockingSplitOther      = 1 << 19,  
    ImGuiDockNodeFlags_NoDockingOverMe          = 1 << 20,  
    ImGuiDockNodeFlags_NoDockingOverOther       = 1 << 21,  
    ImGuiDockNodeFlags_NoDockingOverEmpty       = 1 << 22,  
    ImGuiDockNodeFlags_NoDocking                = ImGuiDockNodeFlags_NoDockingOverMe | ImGuiDockNodeFlags_NoDockingOverOther | ImGuiDockNodeFlags_NoDockingOverEmpty | ImGuiDockNodeFlags_NoDockingSplit | ImGuiDockNodeFlags_NoDockingSplitOther,
    ImGuiDockNodeFlags_SharedFlagsInheritMask_  = ~0,
    ImGuiDockNodeFlags_NoResizeFlagsMask_       = (int)ImGuiDockNodeFlags_NoResize | ImGuiDockNodeFlags_NoResizeX | ImGuiDockNodeFlags_NoResizeY,
    ImGuiDockNodeFlags_LocalFlagsTransferMask_  = (int)ImGuiDockNodeFlags_NoDockingSplit | ImGuiDockNodeFlags_NoResizeFlagsMask_ | (int)ImGuiDockNodeFlags_AutoHideTabBar | ImGuiDockNodeFlags_CentralNode | ImGuiDockNodeFlags_NoTabBar | ImGuiDockNodeFlags_HiddenTabBar | ImGuiDockNodeFlags_NoWindowMenuButton | ImGuiDockNodeFlags_NoCloseButton,
    ImGuiDockNodeFlags_SavedFlagsMask_          = ImGuiDockNodeFlags_NoResizeFlagsMask_ | ImGuiDockNodeFlags_DockSpace | ImGuiDockNodeFlags_CentralNode | ImGuiDockNodeFlags_NoTabBar | ImGuiDockNodeFlags_HiddenTabBar | ImGuiDockNodeFlags_NoWindowMenuButton | ImGuiDockNodeFlags_NoCloseButton,
};
enum ImGuiDataAuthority_
{
    ImGuiDataAuthority_Auto,
    ImGuiDataAuthority_DockNode,
    ImGuiDataAuthority_Window,
};
enum ImGuiDockNodeState
{
    ImGuiDockNodeState_Unknown,
    ImGuiDockNodeState_HostWindowHiddenBecauseSingleWindow,
    ImGuiDockNodeState_HostWindowHiddenBecauseWindowsAreResizing,
    ImGuiDockNodeState_HostWindowVisible,
};
struct  ImGuiDockNode
{
    ImGuiID                 ID;
    ImGuiDockNodeFlags      SharedFlags;                
    ImGuiDockNodeFlags      LocalFlags;                 
    ImGuiDockNodeFlags      LocalFlagsInWindows;        
    ImGuiDockNodeFlags      MergedFlags;                
    ImGuiDockNodeState      State;
    ImGuiDockNode*          ParentNode;
    ImGuiDockNode*          ChildNodes[2];              
    ImVector<ImGuiWindow*>  Windows;                    
    ImGuiTabBar*            TabBar;
    ImVec2                  Pos;                        
    ImVec2                  Size;                       
    ImVec2                  SizeRef;                    
    ImGuiAxis               SplitAxis;                  
    ImU32                   LastBgColor;
    ImGuiWindowClass        WindowClass;                
    ImGuiWindow*            HostWindow;
    ImGuiWindow*            VisibleWindow;              
    ImGuiDockNode*          CentralNode;                
    ImGuiDockNode*          OnlyNodeWithWindows;        
    int                     CountNodeWithWindows;       
    int                     LastFrameAlive;             
    int                     LastFrameActive;            
    int                     LastFrameFocused;           
    ImGuiID                 LastFocusedNodeId;          
    ImGuiID                 SelectedTabId;              
    ImGuiID                 WantCloseTabId;             
    ImGuiID                 RefViewportId;              
    ImU8                    AuthorityForPos         :3; 
    ImU8                    AuthorityForSize        :3;
    ImU8                    AuthorityForViewport    :3;
    bool                    IsVisible               :1; 
    bool                    IsFocused               :1;
    bool                    IsBgDrawnThisFrame      :1;
    bool                    HasCloseButton          :1; 
    bool                    HasWindowMenuButton     :1;
    bool                    HasCentralNodeChild     :1;
    bool                    WantCloseAll            :1; 
    bool                    WantLockSizeOnce        :1;
    bool                    WantMouseMove           :1; 
    bool                    WantHiddenTabBarUpdate  :1;
    bool                    WantHiddenTabBarToggle  :1;
    ImGuiDockNode(ImGuiID id);
    ~ImGuiDockNode();
    bool                    IsRootNode() const      { return ParentNode == ((void *)0); }
    bool                    IsDockSpace() const     { return (MergedFlags & ImGuiDockNodeFlags_DockSpace) != 0; }
    bool                    IsFloatingNode() const  { return ParentNode == ((void *)0) && (MergedFlags & ImGuiDockNodeFlags_DockSpace) == 0; }
    bool                    IsCentralNode() const   { return (MergedFlags & ImGuiDockNodeFlags_CentralNode) != 0; }
    bool                    IsHiddenTabBar() const  { return (MergedFlags & ImGuiDockNodeFlags_HiddenTabBar) != 0; } 
    bool                    IsNoTabBar() const      { return (MergedFlags & ImGuiDockNodeFlags_NoTabBar) != 0; }     
    bool                    IsSplitNode() const     { return ChildNodes[0] != ((void *)0); }
    bool                    IsLeafNode() const      { return ChildNodes[0] == ((void *)0); }
    bool                    IsEmpty() const         { return ChildNodes[0] == ((void *)0) && Windows.Size == 0; }
    ImRect                  Rect() const            { return ImRect(Pos.x, Pos.y, Pos.x + Size.x, Pos.y + Size.y); }
    void                    SetLocalFlags(ImGuiDockNodeFlags flags) { LocalFlags = flags; UpdateMergedFlags(); }
    void                    UpdateMergedFlags()     { MergedFlags = SharedFlags | LocalFlags | LocalFlagsInWindows; }
};
enum ImGuiWindowDockStyleCol
{
    ImGuiWindowDockStyleCol_Text,
    ImGuiWindowDockStyleCol_TabHovered,
    ImGuiWindowDockStyleCol_TabFocused,
    ImGuiWindowDockStyleCol_TabSelected,
    ImGuiWindowDockStyleCol_TabSelectedOverline,
    ImGuiWindowDockStyleCol_TabDimmed,
    ImGuiWindowDockStyleCol_TabDimmedSelected,
    ImGuiWindowDockStyleCol_TabDimmedSelectedOverline,
    ImGuiWindowDockStyleCol_UnsavedMarker,
    ImGuiWindowDockStyleCol_COUNT
};
struct ImGuiWindowDockStyle
{
    ImU32 Colors[ImGuiWindowDockStyleCol_COUNT];
};
struct ImGuiDockContext
{
    ImGuiStorage                    Nodes;          
    ImVector<ImGuiDockRequest>      Requests;
    ImVector<ImGuiDockNodeSettings> NodesSettings;
    bool                            WantFullRebuild;
    ImGuiDockContext()              { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiViewportP : public ImGuiViewport
{
    ImGuiWindow*        Window;                 
    int                 Idx;
    int                 LastFrameActive;        
    int                 LastFocusedStampCount;  
    ImGuiID             LastNameHash;
    ImVec2              LastPos;
    ImVec2              LastSize;
    float               Alpha;                  
    float               LastAlpha;
    bool                LastFocusedHadNavWindow;
    short               PlatformMonitor;
    ImDrawList*         BgFgDrawLists[2];       
    int                 BgFgDrawListsLastFrameActive[2]; 
    float               BgFgDrawListsLastTimeActive[2];  
    ImDrawData          DrawDataP;
    ImDrawDataBuilder   DrawDataBuilder;        
    ImVec2              LastPlatformPos;
    ImVec2              LastPlatformSize;
    ImVec2              LastRendererSize;
    ImVec2              WorkInsetMin;           
    ImVec2              WorkInsetMax;           
    ImVec2              BuildWorkInsetMin;      
    ImVec2              BuildWorkInsetMax;      
    ImGuiViewportP()                    { Window = ((void *)0); Idx = -1; LastFrameActive = LastFocusedStampCount = -1; LastNameHash = 0; Alpha = LastAlpha = 1.0f; LastFocusedHadNavWindow = false; PlatformMonitor = -1; BgFgDrawLists[0] = BgFgDrawLists[1] = ((void *)0); BgFgDrawListsLastFrameActive[0] = BgFgDrawListsLastFrameActive[1] = -1; BgFgDrawListsLastTimeActive[0] = BgFgDrawListsLastTimeActive[1] = -1.0; LastPlatformPos = LastPlatformSize = LastRendererSize = ImVec2(3.402823466e+38F, 3.402823466e+38F); }
    ~ImGuiViewportP()                   { if (BgFgDrawLists[0]) IM_DELETE(BgFgDrawLists[0]); if (BgFgDrawLists[1]) IM_DELETE(BgFgDrawLists[1]); }
    void    ClearRequestFlags()         { PlatformRequestClose = PlatformRequestMove = PlatformRequestResize = false; }
    ImVec2  CalcWorkRectPos(const ImVec2& inset_min) const                           { return ImVec2(Pos.x + inset_min.x, Pos.y + inset_min.y); }
    ImVec2  CalcWorkRectSize(const ImVec2& inset_min, const ImVec2& inset_max) const { return ImVec2(ImMax(0.0f, Size.x - inset_min.x - inset_max.x), ImMax(0.0f, Size.y - inset_min.y - inset_max.y)); }
    void    UpdateWorkRect()            { WorkPos = CalcWorkRectPos(WorkInsetMin); WorkSize = CalcWorkRectSize(WorkInsetMin, WorkInsetMax); } 
    ImRect  GetMainRect() const         { return ImRect(Pos.x, Pos.y, Pos.x + Size.x, Pos.y + Size.y); }
    ImRect  GetWorkRect() const         { return ImRect(WorkPos.x, WorkPos.y, WorkPos.x + WorkSize.x, WorkPos.y + WorkSize.y); }
    ImRect  GetBuildWorkRect() const    { ImVec2 pos = CalcWorkRectPos(BuildWorkInsetMin); ImVec2 size = CalcWorkRectSize(BuildWorkInsetMin, BuildWorkInsetMax); return ImRect(pos.x, pos.y, pos.x + size.x, pos.y + size.y); }
};
struct ImGuiWindowSettings
{
    ImGuiID         ID;
    ImVec2ih        Pos;            
    ImVec2ih        Size;
    ImVec2ih        ViewportPos;
    ImGuiID         ViewportId;
    ImGuiID         DockId;         
    ImGuiID         ClassId;        
    short           DockOrder;      
    ImGuiPackedDate LastUsedDate;
    bool            Collapsed : 1;
    bool            IsChild : 1;
    bool            WantApply : 1;  
    bool            WantDelete : 1; 
    ImGuiWindowSettings()       { memset((void*)this, 0, sizeof(*this)); DockOrder = -1; }
    char* GetName()             { return (char*)(this + 1); }
};
struct ImGuiSettingsCleanupArgs
{
    ImGuiID         TypeHashFilter = 0;                             
    int             DiscardOlderThanMonths = 0;                     
    bool            DiscardWhenMissingDate = false;                 
    bool            DiscardAll = false;                             
    bool            SetCurrentSessionDateToAll = false;             
    bool            SetCurrentSessionDateWhenMissingDate = false;   
    int             _DiscardOlderThanDate = 0;                      
};
struct ImGuiSettingsHandler
{
    const char* TypeName;       
    ImGuiID     TypeHash;       
    void        (*ClearAllFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler);                                
    void        (*ReadInitFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler);                                
    void*       (*ReadOpenFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler, const char* name);              
    void        (*ReadLineFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler, void* entry, const char* line); 
    void        (*ApplyAllFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler);                                
    void        (*WriteAllFn)(ImGuiContext* ctx, ImGuiSettingsHandler* handler, ImGuiTextBuffer* out_buf);      
    void        (*CleanupFn) (ImGuiContext* ctx, ImGuiSettingsHandler* handler, ImGuiSettingsCleanupArgs* args);
    void*       UserData;
    ImGuiSettingsHandler() { memset((void*)this, 0, sizeof(*this)); }
};
enum ImGuiLocKey : int
{
    ImGuiLocKey_VersionStr,
    ImGuiLocKey_TableSizeOne,
    ImGuiLocKey_TableSizeAllFit,
    ImGuiLocKey_TableSizeAllDefault,
    ImGuiLocKey_TableReset,
    ImGuiLocKey_TableResetOrder,
    ImGuiLocKey_TableResetVisibility,
    ImGuiLocKey_WindowingMainMenuBar,
    ImGuiLocKey_WindowingPopup,
    ImGuiLocKey_WindowingUntitled,
    ImGuiLocKey_OpenLink_s,
    ImGuiLocKey_CopyLink,
    ImGuiLocKey_DockingHideTabBar,
    ImGuiLocKey_DockingHoldShiftToDock,
    ImGuiLocKey_DockingDragToUndockOrMoveNode,
    ImGuiLocKey_COUNT
};
struct ImGuiLocEntry
{
    ImGuiLocKey     Key;
    const char*     Text;
};
typedef void (*ImGuiErrorCallback)(ImGuiContext* ctx, void* user_data, const char* msg); 
enum ImGuiDebugLogFlags_
{
    ImGuiDebugLogFlags_None                 = 0,
    ImGuiDebugLogFlags_EventError           = 1 << 0,   
    ImGuiDebugLogFlags_EventActiveId        = 1 << 1,
    ImGuiDebugLogFlags_EventFocus           = 1 << 2,
    ImGuiDebugLogFlags_EventPopup           = 1 << 3,
    ImGuiDebugLogFlags_EventNav             = 1 << 4,
    ImGuiDebugLogFlags_EventClipper         = 1 << 5,
    ImGuiDebugLogFlags_EventSelection       = 1 << 6,
    ImGuiDebugLogFlags_EventIO              = 1 << 7,
    ImGuiDebugLogFlags_EventFont            = 1 << 8,
    ImGuiDebugLogFlags_EventInputRouting    = 1 << 9,
    ImGuiDebugLogFlags_EventDocking         = 1 << 10,
    ImGuiDebugLogFlags_EventViewport        = 1 << 11,
    ImGuiDebugLogFlags_EventTable           = 1 << 12,
    ImGuiDebugLogFlags_EventMask_           = ImGuiDebugLogFlags_EventError | ImGuiDebugLogFlags_EventActiveId | ImGuiDebugLogFlags_EventFocus | ImGuiDebugLogFlags_EventPopup | ImGuiDebugLogFlags_EventNav | ImGuiDebugLogFlags_EventClipper | ImGuiDebugLogFlags_EventSelection | ImGuiDebugLogFlags_EventTable | ImGuiDebugLogFlags_EventIO | ImGuiDebugLogFlags_EventFont | ImGuiDebugLogFlags_EventInputRouting | ImGuiDebugLogFlags_EventDocking | ImGuiDebugLogFlags_EventViewport,
    ImGuiDebugLogFlags_OutputToTTY          = 1 << 20,  
    ImGuiDebugLogFlags_OutputToDebugger     = 1 << 21,  
    ImGuiDebugLogFlags_OutputToTestEngine   = 1 << 22,  
};
struct ImGuiDebugAllocEntry
{
    int         FrameCount;
    ImS16       AllocCount;
    ImS16       FreeCount;
};
struct ImGuiDebugAllocInfo
{
    int         TotalAllocCount;            
    int         TotalFreeCount;
    ImS16       LastEntriesIdx;             
    ImGuiDebugAllocEntry LastEntriesBuf[6]; 
    ImGuiDebugAllocInfo() { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiMetricsConfig
{
    bool        ShowDebugLog = false;
    bool        ShowIDStackTool = false;
    bool        ShowWindowsRects = false;
    bool        ShowWindowsBeginOrder = false;
    bool        ShowTablesRects = false;
    bool        ShowDrawCmdMesh = true;
    bool        ShowDrawCmdBoundingBoxes = true;
    bool        ShowTextEncodingViewer = false;
    bool        ShowTextureUsedRect = false;
    bool        ShowDockingNodes = false;
    int         ShowWindowsRectsType = -1;
    int         ShowTablesRectsType = -1;
    int         HighlightMonitorIdx = -1;
    ImGuiID     HighlightViewportID = 0;
    int         SettingsDiscardMonths = 6;
    bool        SettingsHighlightOldEntries = false;
    bool        ShowFontPreview = true;
};
struct ImGuiStackLevelInfo
{
    ImGuiID                 ID;
    ImS8                    QueryFrameCount;            
    bool                    QuerySuccess;               
    ImS8                    DataType;                   
    int                     DescOffset;                 
    ImGuiStackLevelInfo()   { memset((void*)this, 0, sizeof(*this)); DataType = -1; DescOffset = -1; }
};
struct ImGuiDebugItemPathQuery
{
    ImGuiID                 MainID;                     
    bool                    Active;                     
    bool                    Complete;                   
    ImS8                    Step;                       
    ImVector<ImGuiStackLevelInfo> Results;
    ImGuiTextBuffer         ResultsDescBuf;
    ImGuiTextBuffer         ResultPathBuf;
    ImGuiDebugItemPathQuery() { memset((void*)this, 0, sizeof(*this)); }
};
struct ImGuiIDStackTool
{
    bool                    OptHexEncodeNonAsciiChars;
    bool                    OptCopyToClipboardOnCtrlC;
    int                     LastActiveFrame;
    float                   CopyToClipboardLastTime;
    ImGuiIDStackTool()      { memset((void*)this, 0, sizeof(*this)); LastActiveFrame = -1; OptHexEncodeNonAsciiChars = true; CopyToClipboardLastTime = -3.402823466e+38F; }
};
typedef void (*ImGuiContextHookCallback)(ImGuiContext* ctx, ImGuiContextHook* hook);
enum ImGuiContextHookType { ImGuiContextHookType_NewFramePre, ImGuiContextHookType_NewFramePost, ImGuiContextHookType_EndFramePre, ImGuiContextHookType_EndFramePost, ImGuiContextHookType_RenderPre, ImGuiContextHookType_RenderPost, ImGuiContextHookType_Shutdown, ImGuiContextHookType_PendingRemoval_ };
struct ImGuiContextHook
{
    ImGuiID                     HookId;     
    ImGuiContextHookType        Type;
    ImGuiID                     Owner;
    ImGuiContextHookCallback    Callback;
    void*                       UserData;
    ImGuiContextHook()          { memset((void*)this, 0, sizeof(*this)); }
};
typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section);
struct ImGuiContext
{
    bool                    Initialized;
    bool                    WithinFrameScope;                   
    bool                    WithinFrameScopeWithImplicitWindow; 
    bool                    TestEngineHookItems;                
    int                     FrameCount;
    int                     FrameCountEnded;
    int                     FrameCountPlatformEnded;
    int                     FrameCountRendered;
    double                  Time;
    char                    ContextName[16];                    
    ImGuiIO                 IO;
    ImGuiPlatformIO         PlatformIO;
    ImGuiStyle              Style;
    ImGuiConfigFlags        ConfigFlagsCurrFrame;               
    ImGuiConfigFlags        ConfigFlagsLastFrame;
    ImVector<ImFontAtlas*>  FontAtlases;                        
    ImFont*                 Font;                               
    ImFontBaked*            FontBaked;                          
    float                   FontSize;                           
    float                   FontSizeBase;                       
    float                   FontBakedScale;                     
    float                   CurrentPixelDensity;                
    float                   CurrentDpiScale;                    
    ImDrawListSharedData    DrawListSharedData;
    ImGuiID                 WithinEndChildID;                   
    ImGuiID                 WithinEndPopupID;                   
    void*                   TestEngine;                         
    ImVector<ImGuiInputEvent> InputEventsQueue;                 
    ImVector<ImGuiInputEvent> InputEventsTrail;                 
    ImGuiMouseSource        InputEventsNextMouseSource;
    ImU32                   InputEventsNextEventId;
    ImVector<ImGuiWindow*>  Windows;                            
    ImVector<ImGuiWindow*>  WindowsFocusOrder;                  
    ImVector<ImGuiWindow*>  WindowsTempSortBuffer;              
    ImVector<ImGuiWindowStackData> CurrentWindowStack;
    ImGuiStorage            WindowsById;                        
    int                     WindowsActiveCount;                 
    float                   WindowsBorderHoverPadding;          
    ImGuiID                 DebugBreakInWindow;                 
    ImGuiWindow*            CurrentWindow;                      
    ImGuiWindow*            HoveredWindow;                      
    ImGuiWindow*            HoveredWindowUnderMovingWindow;     
    ImGuiWindow*            HoveredWindowBeforeClear;           
    ImGuiWindow*            MovingWindow;                       
    ImGuiWindow*            WheelingWindow;                     
    ImVec2                  WheelingWindowRefMousePos;
    int                     WheelingWindowStartFrame;           
    int                     WheelingWindowScrolledFrame;
    float                   WheelingWindowReleaseTimer;
    ImVec2                  WheelingWindowWheelRemainder;
    ImVec2                  WheelingAxisAvg;
    const char*             MixedValueLabel;                    
    ImGuiID                 DebugDrawIdConflictsId;             
    ImGuiID                 DebugHookIdInfoId;                  
    ImGuiID                 HoveredId;                          
    ImGuiID                 HoveredIdPreviousFrame;
    int                     HoveredIdPreviousFrameItemCount;    
    float                   HoveredIdTimer;                     
    float                   HoveredIdNotActiveTimer;            
    bool                    HoveredIdAllowOverlap;
    bool                    HoveredIdIsDisabled;                
    bool                    ItemUnclipByLog;                    
    bool                    AnyIdHasBeenEditedThisFrame;
    ImGuiID                 ActiveId;                           
    ImGuiID                 ActiveIdIsAlive;                    
    float                   ActiveIdTimer;
    bool                    ActiveIdIsJustActivated;            
    bool                    ActiveIdWasSelected;                
    bool                    ActiveIdWasSoleSelected;            
    bool                    ActiveIdAllowOverlap;               
    bool                    ActiveIdNoClearOnFocusLoss;         
    bool                    ActiveIdHasBeenPressedBefore;       
    bool                    ActiveIdHasBeenEditedBefore;        
    bool                    ActiveIdHasBeenEditedThisFrame;
    bool                    ActiveIdFromShortcut;
    ImS8                    ActiveIdMouseButton;
    ImGuiID                 ActiveIdDisabledId;                 
    ImVec2                  ActiveIdClickOffset;                
    ImGuiInputSource        ActiveIdSource;                     
    ImGuiWindow*            ActiveIdWindow;
    ImGuiID                 ActiveIdPreviousFrame;
    ImGuiDeactivatedItemData DeactivatedItemData;
    ImGuiDataTypeStorage    ActiveIdValueOnActivation;          
    ImGuiID                 LastActiveId;                       
    float                   LastActiveIdTimer;                  
    bool                    LastActiveIdWasSelected;
    bool                    LastActiveIdWasSoleSelected;
    double                  LastKeyModsChangeTime;              
    double                  LastKeyModsChangeFromNoneTime;      
    double                  LastKeyboardKeyPressTime;           
    ImBitArrayForNamedKeys  KeysMayBeCharInput;                 
    ImGuiKeyOwnerData       KeysOwnerData[ImGuiKey_NamedKey_COUNT];
    ImGuiKeyRoutingTable    KeysRoutingTable;
    ImU32                   ActiveIdUsingNavDirMask;            
    bool                    ActiveIdUsingAllKeyboardKeys;       
    ImGuiKeyChord           DebugBreakInShortcutRouting;        
    ImGuiID                 CurrentFocusScopeId;                
    ImGuiItemFlags          CurrentItemFlags;                   
    ImGuiID                 DebugLocateId;                      
    ImGuiNextItemData       NextItemData;                       
    ImGuiLastItemData       LastItemData;                       
    ImGuiNextWindowData     NextWindowData;                     
    bool                    DebugShowGroupRects;
    bool                    GcCompactAll;                       
    ImGuiCol                        DebugFlashStyleColorIdx;    
    ImVector<ImGuiColorMod>         ColorStack;                 
    ImVector<ImGuiStyleMod>         StyleVarStack;              
    ImVector<ImFontStackData>       FontStack;                  
    ImVector<ImGuiFocusScopeData>   FocusScopeStack;            
    ImVector<ImGuiItemFlags>        ItemFlagsStack;             
    ImVector<ImGuiGroupData>        GroupStack;                 
    ImVector<ImGuiPopupData>        OpenPopupStack;             
    ImVector<ImGuiPopupData>        BeginPopupStack;            
    ImVector<ImGuiTreeNodeStackData>TreeNodeStack;              
    ImVector<ImGuiViewportP*> Viewports;                        
    ImGuiViewportP*         CurrentViewport;                    
    ImGuiViewportP*         MouseViewport;
    ImGuiViewportP*         MouseLastHoveredViewport;           
    ImGuiID                 PlatformLastFocusedViewportId;
    ImGuiPlatformMonitor    FallbackMonitor;                    
    ImRect                  PlatformMonitorsFullWorkRect;       
    int                     ViewportCreatedCount;               
    int                     PlatformWindowsCreatedCount;        
    int                     ViewportFocusedStampCount;          
    bool                    NavCursorVisible;                   
    bool                    NavHighlightItemUnderNav;           
    bool                    NavMousePosDirty;                   
    bool                    NavIdIsAlive;                       
    ImGuiID                 NavId;                              
    ImGuiWindow*            NavWindow;                          
    ImGuiID                 NavFocusScopeId;                    
    ImGuiNavLayer           NavLayer;                           
    ImGuiItemFlags          NavIdItemFlags;
    ImGuiID                 NavActivateId;                      
    ImGuiID                 NavActivateDownId;                  
    ImGuiID                 NavActivatePressedId;               
    ImGuiActivateFlags      NavActivateFlags;
    ImVector<ImGuiFocusScopeData> NavFocusRoute;                
    ImGuiID                 NavHighlightActivatedId;
    float                   NavHighlightActivatedTimer;
    ImGuiID                 NavOpenContextMenuItemId;
    ImGuiID                 NavOpenContextMenuWindowId;
    ImGuiID                 NavNextActivateId;                  
    ImGuiActivateFlags      NavNextActivateFlags;
    ImGuiInputSource        NavInputSource;                     
    ImGuiSelectionUserData  NavLastValidSelectionUserData;      
    ImS8                    NavCursorHideFrames;
    bool                    NavAnyRequest;                      
    bool                    NavInitRequest;                     
    bool                    NavInitRequestFromMove;
    ImGuiNavItemData        NavInitResult;                      
    bool                    NavMoveSubmitted;                   
    bool                    NavMoveScoringItems;                
    bool                    NavMoveForwardToNextFrame;
    ImGuiNavMoveFlags       NavMoveFlags;
    ImGuiScrollFlags        NavMoveScrollFlags;
    ImGuiKeyChord           NavMoveKeyMods;
    ImGuiDir                NavMoveDir;                         
    ImGuiDir                NavMoveDirForDebug;
    ImGuiDir                NavMoveClipDir;                     
    ImRect                  NavScoringRect;                     
    ImRect                  NavScoringNoClipRect;               
    int                     NavScoringDebugCount;               
    int                     NavTabbingDir;                      
    int                     NavTabbingCounter;                  
    ImGuiNavItemData        NavMoveResultLocal;                 
    ImGuiNavItemData        NavMoveResultLocalVisible;          
    ImGuiNavItemData        NavMoveResultOther;                 
    ImGuiNavItemData        NavTabbingResultFirst;              
    ImGuiID                 NavJustMovedFromFocusScopeId;       
    ImGuiID                 NavJustMovedToId;                   
    ImGuiID                 NavJustMovedToFocusScopeId;         
    ImGuiKeyChord           NavJustMovedToKeyMods;
    bool                    NavJustMovedToIsTabbing;            
    bool                    NavJustMovedToIsInit;               
    bool                    NavJustMovedToHasSelectionData;     
    bool                    ConfigNavEnableTabbing;             
    bool                    ConfigNavWindowingWithGamepad;      
    ImGuiKeyChord           ConfigNavWindowingKeyNext;          
    ImGuiKeyChord           ConfigNavWindowingKeyPrev;          
    ImGuiWindow*            NavWindowingTarget;                 
    ImGuiWindow*            NavWindowingTargetAnim;             
    ImGuiWindow*            NavWindowingListWindow;             
    float                   NavWindowingTimer;
    float                   NavWindowingHighlightAlpha;
    ImGuiInputSource        NavWindowingInputSource;
    bool                    NavWindowingToggleLayer;            
    ImGuiKey                NavWindowingToggleKey;              
    ImVec2                  NavWindowingAccumDeltaPos;
    ImVec2                  NavWindowingAccumDeltaSize;
    float                   DimBgRatio;                         
    bool                    DragDropActive;
    bool                    DragDropWithinSource;               
    bool                    DragDropWithinTarget;               
    ImGuiDragDropFlags      DragDropSourceFlags;
    int                     DragDropSourceFrameCount;
    int                     DragDropMouseButton;
    ImGuiPayload            DragDropPayload;
    ImRect                  DragDropTargetRect;                 
    ImRect                  DragDropTargetClipRect;             
    ImGuiID                 DragDropTargetId;
    ImGuiID                 DragDropTargetFullViewport;
    ImGuiDragDropFlags      DragDropAcceptFlagsCurr;
    ImGuiDragDropFlags      DragDropAcceptFlagsPrev;
    float                   DragDropAcceptIdCurrRectSurface;    
    ImGuiID                 DragDropAcceptIdCurr;               
    ImGuiID                 DragDropAcceptIdPrev;               
    int                     DragDropAcceptFrameCount;           
    ImGuiID                 DragDropHoldJustPressedId;          
    ImVector<unsigned char> DragDropPayloadBufHeap;             
    unsigned char           DragDropPayloadBufLocal[16];        
    int                             ClipperTempDataStacked;
    ImVector<ImGuiListClipperData>  ClipperTempData;
    ImGuiTable*                     CurrentTable;
    ImGuiID                         DebugBreakInTable;          
    int                             TablesTempDataStacked;      
    ImVector<ImGuiTableTempData>    TablesTempData;             
    ImPool<ImGuiTable>              Tables;                     
    ImVector<float>                 TablesLastTimeActive;       
    ImVector<ImDrawChannel>         DrawChannelsTempMergeBuffer;
    ImGuiTabBar*                    CurrentTabBar;
    ImPool<ImGuiTabBar>             TabBars;
    ImVector<ImGuiPtrOrIndex>       CurrentTabBarStack;
    ImVector<ImGuiShrinkWidthItem>  ShrinkWidthBuffer;
    ImGuiBoxSelectState             BoxSelectState;
    ImGuiMultiSelectTempData*       CurrentMultiSelect;
    int                             MultiSelectTempDataStacked; 
    ImVector<ImGuiMultiSelectTempData> MultiSelectTempData;
    ImPool<ImGuiMultiSelectState>   MultiSelectStorage;
    ImGuiID                 HoverItemDelayId;
    ImGuiID                 HoverItemDelayIdPreviousFrame;
    float                   HoverItemDelayTimer;                
    float                   HoverItemDelayClearTimer;           
    ImGuiID                 HoverItemUnlockedStationaryId;      
    ImGuiID                 HoverWindowUnlockedStationaryId;    
    ImGuiMouseCursor        MouseCursor;
    float                   MouseStationaryTimer;               
    ImVec2                  MouseLastValidPos;
    ImGuiInputTextState     InputTextState;
    ImGuiTextIndex          InputTextLineIndex;                 
    ImGuiInputTextDeactivatedState InputTextDeactivatedState;
    int                     InputTextPasswordMaskCount;         
    ImGuiID                 InputTextReactivateId;              
    ImGuiID                 TempInputId;                        
    ImGuiDataTypeStorage    DataTypeZeroValue;                  
    int                     BeginMenuDepth;
    int                     BeginComboDepth;
    ImGuiID                 ColorEditCurrentID;                 
    ImGuiID                 ColorEditSavedID;                   
    float                   ColorEditSavedHue;                  
    float                   ColorEditSavedSat;                  
    ImU32                   ColorEditSavedColor;                
    ImVec4                  ColorPickerRef;                     
    ImGuiComboPreviewData   ComboPreviewData;
    ImRect                  WindowResizeBorderExpectedRect;     
    bool                    WindowResizeRelativeMode;
    short                   ScrollbarSeekMode;                  
    float                   ScrollbarClickDeltaToGrabCenter;    
    float                   SliderGrabClickOffset;
    float                   SliderCurrentAccum;                 
    bool                    SliderCurrentAccumDirty;            
    bool                    DragCurrentAccumDirty;
    float                   DragCurrentAccum;                   
    float                   DragSpeedDefaultRatio;              
    float                   DisabledAlphaBackup;                
    short                   DisabledStackSize;
    short                   TooltipOverrideCount;
    ImGuiWindow*            TooltipPreviousWindow;              
    ImVector<char>          ClipboardHandlerData;               
    ImVector<ImGuiID>       MenusIdSubmittedThisFrame;          
    ImGuiTypingSelectState  TypingSelectState;                  
    ImGuiPlatformImeData    PlatformImeData;                    
    ImGuiPlatformImeData    PlatformImeDataPrev;                
    ImVector<ImTextureData*> UserTextures;                      
    ImGuiDockContext        DockContext;
    void                    (*DockNodeWindowMenuHandler)(ImGuiContext* ctx, ImGuiDockNode* node, ImGuiTabBar* tab_bar);
    ImGuiPackedDate         SessionDate;                        
    bool                    SettingsLoaded;
    float                   SettingsDirtyTimer;                 
    ImGuiTextBuffer         SettingsIniData;                    
    ImVector<ImGuiSettingsHandler>      SettingsHandlers;       
    ImChunkStream<ImGuiWindowSettings>  SettingsWindows;        
    ImChunkStream<ImGuiTableSettings>   SettingsTables;         
    ImVector<ImGuiContextHook>          Hooks;                  
    ImGuiID                             HookIdNext;             
    ImGuiDemoMarkerCallback             DemoMarkerCallback;
    const char*             LocalizationTable[ImGuiLocKey_COUNT];
    bool                    LogEnabled;                         
    bool                    LogLineFirstItem;
    ImGuiLogFlags           LogFlags;                           
    ImGuiWindow*            LogWindow;
    ImFileHandle            LogFile;                            
    ImGuiTextBuffer         LogBuffer;                          
    const char*             LogNextPrefix;                      
    const char*             LogNextSuffix;
    float                   LogLinePosY;
    int                     LogDepthRef;
    int                     LogDepthToExpand;
    int                     LogDepthToExpandDefault;            
    ImGuiErrorCallback      ErrorCallback;                      
    void*                   ErrorCallbackUserData;              
    ImVec2                  ErrorTooltipLockedPos;
    bool                    ErrorFirst;
    int                     ErrorCountCurrentFrame;             
    ImGuiErrorRecoveryState StackSizesInNewFrame;               
    ImGuiErrorRecoveryState*StackSizesInBeginForCurrentWindow;  
    int                     DebugDrawIdConflictsCount;          
    ImGuiDebugLogFlags      DebugLogFlags;
    ImGuiTextBuffer         DebugLogBuf;
    ImGuiTextIndex          DebugLogIndex;
    int                     DebugLogSkippedErrors;
    ImGuiDebugLogFlags      DebugLogAutoDisableFlags;
    ImU8                    DebugLogAutoDisableFrames;
    ImU8                    DebugLocateFrames;                  
    bool                    DebugBreakInLocateId;               
    ImGuiKeyChord           DebugBreakKeyChord;                 
    ImS8                    DebugBeginReturnValueCullDepth;     
    bool                    DebugItemPickerActive;              
    ImU8                    DebugItemPickerMouseButton;
    ImGuiID                 DebugItemPickerBreakId;             
    float                   DebugFlashStyleColorTime;
    ImVec4                  DebugFlashStyleColorBackup;
    ImGuiMetricsConfig      DebugMetricsConfig;
    ImGuiDebugItemPathQuery DebugItemPathQuery;
    ImGuiIDStackTool        DebugIDStackTool;
    ImGuiDebugAllocInfo     DebugAllocInfo;
    ImGuiDockNode*          DebugHoveredDockNode;               
    float                   FramerateSecPerFrame[60];           
    int                     FramerateSecPerFrameIdx;
    int                     FramerateSecPerFrameCount;
    float                   FramerateSecPerFrameAccum;
    int                     WantCaptureMouseNextFrame;          
    int                     WantCaptureKeyboardNextFrame;       
    int                     WantTextInputNextFrame;             
    ImVector<char>          TempBuffer;                         
    char                    TempKeychordName[64];
    ImGuiContext(ImFontAtlas* shared_font_atlas);
    ~ImGuiContext();
};
struct  ImGuiWindowTempData
{
    ImVec2                  CursorPos;              
    ImVec2                  CursorPosPrevLine;
    ImVec2                  CursorStartPos;         
    ImVec2                  CursorMaxPos;           
    ImVec2                  IdealMaxPos;            
    ImVec2                  CurrLineSize;
    ImVec2                  PrevLineSize;
    float                   CurrLineTextBaseOffset; 
    float                   PrevLineTextBaseOffset;
    bool                    IsSameLine;
    bool                    IsSetPos;
    ImVec1                  Indent;                 
    ImVec1                  ColumnsOffset;          
    ImVec1                  GroupOffset;
    ImVec2                  CursorStartPosLossyness;
    ImGuiNavLayer           NavLayerCurrent;        
    short                   NavLayersActiveMask;    
    short                   NavLayersActiveMaskNext;
    bool                    NavIsScrollPushableX;   
    bool                    NavHideHighlightOneFrame;
    bool                    NavWindowHasScrollY;    
    bool                    MenuBarAppending;       
    ImVec2                  MenuBarOffset;          
    ImGuiMenuColumns        MenuColumns;            
    int                     TreeDepth;              
    ImU32                   TreeHasStackDataDepthMask;      
    ImU32                   TreeRecordsClippedNodesY2Mask;  
    ImVector<ImGuiWindow*>  ChildWindows;
    ImGuiStorage*           StateStorage;           
    ImGuiOldColumns*        CurrentColumns;         
    int                     CurrentTableIdx;        
    ImGuiLayoutType         LayoutType;
    ImGuiLayoutType         ParentLayoutType;       
    ImU32                   ModalDimBgColor;
    ImGuiItemStatusFlags    WindowItemStatusFlags;
    ImGuiItemStatusFlags    ChildItemStatusFlags;
    ImGuiItemStatusFlags    DockTabItemStatusFlags;
    ImRect                  DockTabItemRect;
    float                   ItemWidth;              
    float                   ItemWidthDefault;
    float                   TextWrapPos;            
    ImVector<float>         ItemWidthStack;         
    ImVector<float>         TextWrapPosStack;       
};
struct  ImGuiWindow
{
    ImGuiContext*           Ctx;                                
    char*                   Name;                               
    ImGuiID                 ID;                                 
    ImGuiWindowFlags        Flags, FlagsPreviousFrame;          
    ImGuiChildFlags         ChildFlags;                         
    ImGuiWindowClass        WindowClass;                        
    ImGuiViewportP*         Viewport;                           
    ImGuiID                 ViewportId;                         
    ImVec2                  ViewportPos;                        
    int                     ViewportAllowPlatformMonitorExtend; 
    ImVec2                  Pos;                                
    ImVec2                  Size;                               
    ImVec2                  SizeFull;                           
    ImVec2                  ContentSize;                        
    ImVec2                  ContentSizeIdeal;
    ImVec2                  ContentSizeExplicit;                
    ImVec2                  WindowPadding;                      
    float                   WindowRounding;                     
    float                   WindowBorderSize;                   
    float                   TitleBarHeight, MenuBarHeight;      
    float                   DecoOuterSizeX1, DecoOuterSizeY1;   
    float                   DecoOuterSizeX2, DecoOuterSizeY2;   
    float                   DecoInnerSizeX1, DecoInnerSizeY1;   
    int                     NameBufLen;                         
    ImGuiID                 MoveId;                             
    ImGuiID                 TabId;                              
    ImGuiID                 ChildId;                            
    ImGuiID                 PopupId;                            
    ImVec2                  Scroll;
    ImVec2                  ScrollMax;
    ImVec2                  ScrollTarget;                       
    ImVec2                  ScrollTargetCenterRatio;            
    ImVec2                  ScrollTargetEdgeSnapDist;           
    ImVec2                  ScrollbarSizes;                     
    bool                    ScrollbarX, ScrollbarY;             
    bool                    ScrollbarXStabilizeEnabled;         
    ImU8                    ScrollbarXStabilizeToggledHistory;  
    bool                    ViewportOwned;
    bool                    Active;                             
    bool                    WasActive;
    bool                    WriteAccessed;                      
    bool                    Collapsed;                          
    bool                    WantCollapseToggle;
    bool                    SkipItems;                          
    bool                    SkipRefresh;                        
    bool                    Appearing;                          
    bool                    Hidden;                             
    bool                    IsFallbackWindow;                   
    bool                    IsExplicitChild;                    
    bool                    HasCloseButton;                     
    signed char             ResizeBorderHovered;                
    signed char             ResizeBorderHeld;                   
    short                   BeginCount;                         
    short                   BeginCountPreviousFrame;            
    short                   BeginOrderWithinParent;             
    short                   BeginOrderWithinContext;            
    short                   FocusOrder;                         
    ImGuiDir                AutoPosLastDirection;
    ImS8                    AutoFitFramesX, AutoFitFramesY;
    bool                    AutoFitOnlyGrows;
    ImS8                    HiddenFramesCanSkipItems;           
    ImS8                    HiddenFramesCannotSkipItems;        
    ImS8                    HiddenFramesForRenderOnly;          
    ImS8                    DisableInputsFrames;                
    ImGuiWindowBgClickFlags BgClickFlags : 8;                   
    ImGuiCond               SetWindowPosAllowFlags : 8;         
    ImGuiCond               SetWindowSizeAllowFlags : 8;        
    ImGuiCond               SetWindowCollapsedAllowFlags : 8;   
    ImGuiCond               SetWindowDockAllowFlags : 8;        
    ImVec2                  SetWindowPosVal;                    
    ImVec2                  SetWindowPosPivot;                  
    ImVector<ImGuiID>       IDStack;                            
    ImGuiWindowTempData     DC;                                 
    ImRect                  OuterRectClipped;                   
    ImRect                  InnerRect;                          
    ImRect                  InnerClipRect;                      
    ImRect                  WorkRect;                           
    ImRect                  ParentWorkRect;                     
    ImRect                  ClipRect;                           
    ImRect                  ContentRegionRect;                  
    ImVec2ih                HitTestHoleSize;                    
    ImVec2ih                HitTestHoleOffset;
    int                     LastFrameActive;                    
    int                     LastFrameJustFocused;               
    float                   LastTimeActive;                     
    ImGuiStorage            StateStorage;
    ImVector<ImGuiOldColumns> ColumnsStorage;
    float                   FontWindowScale;                    
    float                   FontWindowScaleParents;
    float                   FontRefSize;                        
    int                     SettingsOffset;                     
    ImDrawList*             DrawList;                           
    ImDrawList              DrawListInst;
    ImGuiWindow*            ParentWindow;                       
    ImGuiWindow*            ParentWindowInBeginStack;
    ImGuiWindow*            RootWindow;                         
    ImGuiWindow*            RootWindowPopupTree;                
    ImGuiWindow*            RootWindowDockTree;                 
    ImGuiWindow*            RootWindowForTitleBarHighlight;     
    ImGuiWindow*            RootWindowForNav;                   
    ImGuiWindow*            ParentWindowForFocusRoute;          
    ImGuiWindow*            NavLastChildNavWindow;              
    ImGuiID                 NavLastIds[ImGuiNavLayer_COUNT];    
    ImRect                  NavRectRel[ImGuiNavLayer_COUNT];    
    ImVec2                  NavPreferredScoringPosRel[ImGuiNavLayer_COUNT]; 
    ImGuiID                 NavRootFocusScopeId;                
    int                     MemoryDrawListIdxCapacity;          
    int                     MemoryDrawListVtxCapacity;
    bool                    MemoryCompacted;                    
    bool                    DockIsActive        :1;             
    bool                    DockNodeIsVisible   :1;
    bool                    DockTabIsVisible    :1;             
    bool                    DockTabWantClose    :1;
    short                   DockOrder;                          
    ImGuiWindowDockStyle    DockStyle;
    ImGuiDockNode*          DockNode;                           
    ImGuiDockNode*          DockNodeAsHost;                     
    ImGuiID                 DockId;                             
    bool                    InheritNoInputs;                    
public:
    ImGuiWindow(ImGuiContext* context, const char* name);
    ~ImGuiWindow();
    ImGuiID     GetID(const char* str, const char* str_end = ((void *)0));
    ImGuiID     GetID(const void* ptr);
    ImGuiID     GetID(int n);
    ImGuiID     GetIDFromPos(const ImVec2& p_abs);
    ImGuiID     GetIDFromRectangle(const ImRect& r_abs);
    ImRect      Rect() const            { return ImRect(Pos.x, Pos.y, Pos.x + Size.x, Pos.y + Size.y); }
    ImRect      TitleBarRect() const    { return ImRect(Pos, ImVec2(Pos.x + SizeFull.x, Pos.y + TitleBarHeight)); }
    ImRect      MenuBarRect() const     { float y1 = Pos.y + TitleBarHeight; return ImRect(Pos.x, y1, Pos.x + SizeFull.x, y1 + MenuBarHeight); }
};
enum ImGuiTabBarFlagsPrivate_
{
    ImGuiTabBarFlags_DockNode                   = 1 << 20,  
    ImGuiTabBarFlags_IsFocused                  = 1 << 21,
    ImGuiTabBarFlags_SaveSettings               = 1 << 22,  
};
enum ImGuiTabItemFlagsPrivate_
{
    ImGuiTabItemFlags_SectionMask_              = ImGuiTabItemFlags_Leading | ImGuiTabItemFlags_Trailing,
    ImGuiTabItemFlags_NoCloseButton             = 1 << 20,  
    ImGuiTabItemFlags_Button                    = 1 << 21,  
    ImGuiTabItemFlags_Invisible                 = 1 << 22,  
    ImGuiTabItemFlags_Unsorted                  = 1 << 23,  
};
struct ImGuiTabItem
{
    ImGuiID             ID;
    ImGuiTabItemFlags   Flags;
    ImGuiWindow*        Window;                 
    int                 LastFrameVisible;       
    int                 LastFrameSelected;      
    float               Offset;                 
    float               Width;                  
    float               ContentWidth;           
    float               RequestedWidth;         
    ImS32               NameOffset;             
    ImS16               BeginOrder;             
    ImS16               IndexDuringLayout;      
    bool                WantClose;              
    bool                ContentsIsVisible;
    ImGuiTabItem()      { memset((void*)this, 0, sizeof(*this)); LastFrameVisible = LastFrameSelected = -1; RequestedWidth = -1.0f; NameOffset = -1; BeginOrder = IndexDuringLayout = -1; }
};
struct  ImGuiTabBar
{
    ImGuiWindow*        Window;
    ImVector<ImGuiTabItem> Tabs;
    ImGuiTabBarFlags    Flags;
    ImGuiID             ID;                     
    ImGuiID             SelectedTabId;          
    ImGuiID             NextSelectedTabId;      
    ImGuiID             NextScrollToTabId;
    ImGuiID             VisibleTabContentsId;   
    int                 CurrFrameVisible;
    int                 PrevFrameVisible;
    ImRect              BarRect;
    float               BarRectPrevWidth;       
    float               CurrTabsContentsHeight;
    float               PrevTabsContentsHeight; 
    float               WidthAllTabs;           
    float               WidthAllTabsIdeal;      
    float               ScrollingAnim;
    float               ScrollingTarget;
    float               ScrollingTargetDistToVisibility;
    float               ScrollingSpeed;
    float               ScrollingRectMinX;
    float               ScrollingRectMaxX;
    float               SeparatorMinX;
    float               SeparatorMaxX;
    ImGuiID             ReorderRequestTabId;
    ImS16               ReorderRequestOffset;
    ImS8                BeginCount;
    bool                WantLayout;
    bool                VisibleTabWasSubmitted;
    bool                LastTabItemContentsAppearing;
    bool                TabsAddedNew;           
    bool                ScrollButtonEnabled;
    ImS16               TabsActiveCount;        
    ImS16               LastTabItemIdx;         
    float               ItemSpacingY;
    ImVec2              FramePadding;           
    ImVec2              BackupCursorPos;
    ImGuiTextBuffer     TabsNames;              
    ImGuiTabBar();
};
struct ImGuiTableColumn
{
    ImGuiTableColumnFlags   Flags;                          
    float                   WidthGiven;                     
    float                   MinX;                           
    float                   MaxX;
    float                   WidthRequest;                   
    float                   WidthAuto;                      
    float                   WidthMax;                       
    float                   StretchWeight;                  
    float                   InitStretchWeightOrWidth;       
    ImRect                  ClipRect;                       
    ImGuiID                 ID;                             
    ImGuiID                 UserData;                       
    float                   WorkMinX;                       
    float                   WorkMaxX;                       
    float                   ItemWidth;                      
    float                   ContentMaxXFrozen;              
    float                   ContentMaxXUnfrozen;
    float                   ContentMaxXHeadersUsed;         
    float                   ContentMaxXHeadersIdeal;
    ImS16                   NameOffset;                     
    ImGuiTableColumnIdx     DisplayOrder;                   
    ImGuiTableColumnIdx     IndexWithinEnabledSet;          
    ImGuiTableColumnIdx     PrevEnabledColumn;              
    ImGuiTableColumnIdx     NextEnabledColumn;              
    ImGuiTableColumnIdx     SortOrder;                      
    ImGuiTableDrawChannelIdx DrawChannelCurrent;            
    ImGuiTableDrawChannelIdx DrawChannelFrozen;             
    ImGuiTableDrawChannelIdx DrawChannelUnfrozen;           
    bool                    IsEnabled;                      
    bool                    IsUserEnabled;                  
    bool                    IsUserEnabledNextFrame;
    bool                    IsVisibleX;                     
    bool                    IsVisibleY;
    bool                    IsRequestOutput;                
    bool                    IsSkipItems;                    
    bool                    IsPreserveWidthAuto : 1;
    bool                    IsJustCreated : 1;
    bool                    IsLoadedSettings : 1;
    bool                    IsNeedReconcileSrc : 1;
    bool                    IsNeedReconcileDst : 1;
    ImS8                    NavLayerCurrent;                
    ImU8                    AutoFitQueue : 4;               
    ImU8                    CannotSkipItemsQueue : 4;       
    ImU8                    SortDirection : 2;              
    ImU8                    SortDirectionsAvailCount : 2;   
    ImU8                    SortDirectionsAvailMask : 4;    
    ImU8                    SortDirectionsAvailList;        
    ImGuiTableColumn()
    {
        memset((void*)this, 0, sizeof(*this));
        StretchWeight = WidthRequest = -1.0f;
        NameOffset = -1;
        DisplayOrder = IndexWithinEnabledSet = -1;
        PrevEnabledColumn = NextEnabledColumn = -1;
        SortOrder = -1;
        SortDirection = ImGuiSortDirection_None;
        IsJustCreated = true;
        DrawChannelCurrent = DrawChannelFrozen = DrawChannelUnfrozen = (ImU8)-1;
    }
};
struct ImGuiTableReconcileColumnData
{
    ImGuiID                 ID;
    ImS16                   NameOffset;
    ImGuiTableColumnFlags   Flags;
    float                   InitWidthOrWeight;
    ImGuiID                 UserData;
    ImGuiTableColumnIdx     ColumnNewIdx;   
    ImGuiTableColumnIdx     ColumnOldIdx;   
    ImGuiTableColumn        ColumnOldData;  
};
struct ImGuiTableCellData
{
    ImU32                       BgColor;    
    ImGuiTableColumnIdx         Column;     
};
struct ImGuiTableHeaderData
{
    ImGuiTableColumnIdx         Index;      
    ImU32                       TextColor;
    ImU32                       BgColor0;
    ImU32                       BgColor1;
};
struct ImGuiTableInstanceData
{
    ImGuiID                     TableInstanceID;
    float                       LastOuterHeight;            
    float                       LastTopHeadersRowHeight;    
    float                       LastFrozenHeight;           
    int                         HoveredRowLast;             
    int                         HoveredRowNext;             
    ImGuiTableInstanceData()    { TableInstanceID = 0; LastOuterHeight = LastTopHeadersRowHeight = LastFrozenHeight = 0.0f; HoveredRowLast = HoveredRowNext = -1; }
};
struct  ImGuiTable
{
    ImGuiID                     ID;
    ImGuiTableFlags             Flags;
    void*                       RawData;                    
    ImGuiTableTempData*         TempData;                   
    ImSpan<ImGuiTableColumn>    Columns;                    
    ImSpan<ImGuiTableColumnIdx> DisplayOrderToIndex;        
    ImSpan<ImGuiTableCellData>  RowCellData;                
    ImBitArrayPtr               EnabledMaskByDisplayOrder;  
    ImBitArrayPtr               EnabledMaskByIndex;         
    ImBitArrayPtr               VisibleMaskByIndex;         
    ImGuiTableFlags             SettingsLoadedFlags;        
    int                         SettingsOffset;             
    int                         LastFrameActive;
    int                         ColumnsCount;               
    int                         CurrentRow;
    int                         CurrentColumn;
    ImS16                       InstanceCurrent;            
    ImS16                       InstanceInteracted;         
    float                       RowPosY1;
    float                       RowPosY2;
    float                       RowMinHeight;               
    float                       RowCellPaddingY;            
    float                       RowTextBaseline;
    float                       RowIndentOffsetX;
    ImGuiTableRowFlags          RowFlags : 16;              
    ImGuiTableRowFlags          LastRowFlags : 16;
    int                         RowBgColorCounter;          
    ImU32                       RowBgColor[2];              
    ImU32                       BorderColorStrong;
    ImU32                       BorderColorLight;
    float                       BorderX1;
    float                       BorderX2;
    float                       BorderSize;
    float                       HostIndentX;
    float                       MinColumnWidth;
    float                       OuterPaddingX;
    float                       CellPaddingX;               
    float                       CellSpacingX1;              
    float                       CellSpacingX2;
    float                       InnerWidth;                 
    float                       ColumnsGivenWidth;          
    float                       ColumnsAutoFitWidth;        
    float                       ColumnsStretchSumWeights;   
    float                       ResizedColumnNextWidth;
    float                       ResizeLockMinContentsX2;    
    float                       RefScale;                   
    float                       AngledHeadersHeight;        
    float                       AngledHeadersSlope;         
    ImRect                      OuterRect;                  
    ImRect                      InnerRect;                  
    ImRect                      WorkRect;
    ImRect                      InnerClipRect;
    ImRect                      BgClipRect;                 
    ImRect                      Bg0ClipRectForDrawCmd;      
    ImRect                      Bg2ClipRectForDrawCmd;      
    ImRect                      HostClipRect;               
    ImRect                      HostBackupInnerClipRect;    
    ImGuiWindow*                OuterWindow;                
    ImGuiWindow*                InnerWindow;                
    ImGuiTextBuffer             ColumnsNames;               
    ImDrawListSplitter*         DrawSplitter;               
    ImGuiTableInstanceData      InstanceDataFirst;
    ImVector<ImGuiTableInstanceData>    InstanceDataExtra;  
    ImGuiTableSortSpecs         SortSpecs;                  
    ImVector<ImGuiTableColumnSortSpecs> SortSpecsMulti;     
    ImGuiTableColumnSortSpecs   SortSpecsSingle;
    ImGuiTableColumnIdx         SortSpecsCount;
    ImGuiTableColumnIdx         ColumnsEnabledCount;        
    ImGuiTableColumnIdx         ColumnsEnabledFixedCount;   
    ImGuiTableColumnIdx         DeclColumnsCount;           
    ImGuiTableColumnIdx         AngledHeadersCount;         
    ImGuiTableColumnIdx         HoveredColumnBody;          
    ImGuiTableColumnIdx         HoveredColumnBorder;        
    ImGuiTableColumnIdx         HighlightColumnHeader;      
    ImGuiTableColumnIdx         AutoFitSingleColumn;        
    ImGuiTableColumnIdx         ResizedColumn;              
    ImGuiTableColumnIdx         LastResizedColumn;          
    ImGuiTableColumnIdx         HeldHeaderColumn;           
    ImGuiTableColumnIdx         LastHeldHeaderColumn;       
    ImGuiTableColumnIdx         ReorderColumn;              
    ImGuiTableColumnIdx         ReorderColumnDstOrder;      
    ImGuiTableColumnIdx         LeftMostEnabledColumn;      
    ImGuiTableColumnIdx         RightMostEnabledColumn;     
    ImGuiTableColumnIdx         LeftMostStretchedColumn;    
    ImGuiTableColumnIdx         RightMostStretchedColumn;   
    ImGuiTableColumnIdx         ContextPopupColumn;         
    ImGuiTableColumnIdx         FreezeRowsRequest;          
    ImGuiTableColumnIdx         FreezeRowsCount;            
    ImGuiTableColumnIdx         FreezeColumnsRequest;       
    ImGuiTableColumnIdx         FreezeColumnsCount;         
    ImGuiTableColumnIdx         RowCellDataCurrent;         
    ImGuiTableDrawChannelIdx    DummyDrawChannel;           
    ImGuiTableDrawChannelIdx    Bg2DrawChannelCurrent;      
    ImGuiTableDrawChannelIdx    Bg2DrawChannelUnfrozen;
    ImS8                        NavLayer;                   
    bool                        IsLayoutLocked;             
    bool                        IsInsideRow;                
    bool                        IsNewTable;
    bool                        IsInitializing;
    bool                        IsReconcileMode;
    bool                        IsSortSpecsDirty;
    bool                        IsUsingHeaders;             
    bool                        IsContextPopupOpen;         
    bool                        DisableDefaultContextMenu;  
    bool                        IsSettingsRequestLoad;
    bool                        IsSettingsDirty;            
    bool                        IsDefaultDisplayOrder;      
    bool                        IsDefaultVisibility;        
    bool                        IsResetAllRequest;          
    bool                        IsResetDisplayOrderRequest;
    bool                        IsResetVisibilityRequest;
    bool                        IsUnfrozenRows;             
    bool                        IsDefaultSizingPolicy;      
    bool                        IsActiveIdAliveBeforeTable;
    bool                        IsActiveIdInTable;
    bool                        HasScrollbarYCurr;          
    bool                        HasScrollbarYPrev;          
    bool                        MemoryCompacted;
    bool                        HostSkipItems;              
    ImGuiTable()                { memset((void*)this, 0, sizeof(*this)); LastFrameActive = -1; }
    ~ImGuiTable()               { ImGui::MemFree(RawData); }
};
struct  ImGuiTableTempData
{
    ImGuiID                     WindowID;                   
    int                         TableIndex;                 
    float                       LastTimeActive;             
    float                       AngledHeadersExtraWidth;    
    ImVector<ImGuiTableHeaderData> AngledHeadersRequests;   
    ImVector<ImGuiTableReconcileColumnData> ReconcileColumnsRequests; 
    void*                       OldColumnsRawData;          
    ImSpan<ImGuiTableColumn>    OldColumnsData;
    ImVec2                      UserOuterSize;              
    ImDrawListSplitter          DrawSplitter;
    ImRect                      HostBackupWorkRect;         
    ImRect                      HostBackupParentWorkRect;   
    ImVec2                      HostBackupPrevLineSize;     
    ImVec2                      HostBackupCurrLineSize;     
    ImVec2                      HostBackupCursorMaxPos;     
    ImVec1                      HostBackupColumnsOffset;    
    float                       HostBackupItemWidth;        
    int                         HostBackupItemWidthStackSize;
    ImGuiTableTempData()        { memset((void*)this, 0, sizeof(*this)); LastTimeActive = -1.0f; }
};
struct ImGuiTableColumnSettings
{
    float                   WidthOrWeight;
    ImGuiID                 ID;
    ImGuiTableColumnIdx     Index;
    ImGuiTableColumnIdx     DisplayOrder;
    ImGuiTableColumnIdx     SortOrder;
    ImU8                    SortDirection : 2;
    ImS8                    IsEnabled : 2;  
    ImU8                    IsStretch : 1;
    bool                    IsLoaded : 1;   
    ImGuiTableColumnSettings()
    {
        WidthOrWeight = 0.0f;
        ID = 0;
        Index = -1;
        DisplayOrder = SortOrder = -1;
        SortDirection = ImGuiSortDirection_None;
        IsEnabled = -1;
        IsStretch = 0;
        IsLoaded = false;
    }
};
struct ImGuiTableSettings
{
    ImGuiID                     ID;                     
    ImGuiTableFlags             SaveFlags;              
    float                       RefScale;               
    ImGuiTableColumnIdx         ColumnsCount;
    ImGuiTableColumnIdx         ColumnsCountMax;        
    ImGuiPackedDate             LastUsedDate;
    bool                        WantApply : 1;          
    ImGuiTableSettings()        { memset((void*)this, 0, sizeof(*this)); }
    ImGuiTableColumnSettings*   GetColumnSettings()     { return (ImGuiTableColumnSettings*)(this + 1); }
};
namespace ImGui
{
     void          TableOpenContextMenu(int column_n = -1);
     void          TableSetColumnWidth(int column_n, float width);
     void          TableSetColumnSortDirection(int column_n, ImGuiSortDirection sort_direction, bool append_to_sort_specs);
     int           TableGetHoveredRow();       
     float         TableGetHeaderRowHeight();
     float         TableGetHeaderAngledMaxLabelWidth();
     void          TablePushBackgroundChannel();
     void          TablePopBackgroundChannel();
     void          TablePushColumnChannel(int column_n);
     void          TablePopColumnChannel();
     void          TableAngledHeadersRowEx(ImGuiID row_id, float angle, float max_label_width, const ImGuiTableHeaderData* data, int data_count);
    inline    ImGuiTable*   GetCurrentTable() { ImGuiContext& g = *GImGui; return g.CurrentTable; }
     ImGuiTable*   TableFindByID(ImGuiID id);
     bool          BeginTableEx(const char* name, ImGuiID id, int columns_count, ImGuiTableFlags flags = 0, const ImVec2& outer_size = ImVec2(0, 0), float inner_width = 0.0f);
     void          TableBeginInitMemory(ImGuiTable* table, int columns_count);
     void          TableApplyQueuedRequests(ImGuiTable* table);
     void          TableSetupDrawChannels(ImGuiTable* table);
     void          TableReconcileColumns(ImGuiTable* table);
     void          TableUpdateLayout(ImGuiTable* table);
     void          TableUpdateBorders(ImGuiTable* table);
     void          TableUpdateColumnsWeightFromWidth(ImGuiTable* table);
     void          TableApplyExternalUnclipRect(ImGuiTable* table, ImRect& rect);
     void          TableDrawBorders(ImGuiTable* table);
     void          TableDrawDefaultContextMenu(ImGuiTable* table, ImGuiTableFlags flags_for_section_to_display);
     bool          TableBeginContextMenuPopup(ImGuiTable* table);
     void          TableMergeDrawChannels(ImGuiTable* table);
    inline ImGuiTableInstanceData*  TableGetInstanceData(ImGuiTable* table, int instance_no) { if (instance_no == 0) return &table->InstanceDataFirst; return &table->InstanceDataExtra[instance_no - 1]; }
    inline ImGuiID                  TableGetInstanceID(ImGuiTable* table, int instance_no)   { return TableGetInstanceData(table, instance_no)->TableInstanceID; }
     void          TableFixDisplayOrder(ImGuiTable* table);
     void          TableSortSpecsSanitize(ImGuiTable* table);
     void          TableSortSpecsBuild(ImGuiTable* table);
     void          TableInitColumnDefaults(ImGuiTable* table, ImGuiTableColumn* column, ImGuiTableColumnFlags init_mask);
     ImGuiSortDirection TableGetColumnNextSortDirection(ImGuiTableColumn* column);
     void          TableFixColumnSortDirection(ImGuiTable* table, ImGuiTableColumn* column);
     float         TableGetColumnWidthAuto(ImGuiTable* table, ImGuiTableColumn* column);
     void          TableBeginRow(ImGuiTable* table);
     void          TableEndRow(ImGuiTable* table);
     void          TableBeginCell(ImGuiTable* table, int column_n);
     void          TableEndCell(ImGuiTable* table);
     ImRect        TableGetCellBgRect(const ImGuiTable* table, int column_n);
     const char*   TableGetColumnName(const ImGuiTable* table, int column_n);
     ImGuiID       TableGetColumnResizeID(ImGuiTable* table, int column_n, int instance_no = 0);
     float         TableCalcMaxColumnWidth(const ImGuiTable* table, int column_n);
     void          TableSetColumnWidthAutoSingle(ImGuiTable* table, int column_n);
     void          TableSetColumnWidthAutoAll(ImGuiTable* table);
     void          TableSetColumnDisplayOrder(ImGuiTable* table, int column_n, int dst_order);
     void          TableQueueSetColumnDisplayOrder(ImGuiTable* table, int column_n, int dst_order);
     void          TableRemove(ImGuiTable* table);
     void          TableGcCompactTransientBuffers(ImGuiTable* table);
     void          TableGcCompactTransientBuffers(ImGuiTableTempData* table);
     void          TableGcCompactSettings();
     void                  TableLoadSettings(ImGuiTable* table);
     void                  TableLoadSettingsForColumns(ImGuiTable* table);
     void                  TableLoadSettingsForColumn(ImGuiTableColumn* column, ImGuiTableColumnSettings* column_settings, ImGuiTableFlags load_flags);
     void                  TableSaveSettings(ImGuiTable* table);
     void                  TableResetSettings(ImGuiTable* table);
     ImGuiTableSettings*   TableGetBoundSettings(ImGuiTable* table);
     void                  TableSettingsAddSettingsHandler();
     ImGuiTableSettings*   TableSettingsCreate(ImGuiID id, int columns_count);
     ImGuiTableSettings*   TableSettingsFindByID(ImGuiID id);
     void          SetWindowClipRectBeforeSetChannel(ImGuiWindow* window, const ImRect& clip_rect);
     void          BeginColumns(const char* str_id, int count, ImGuiOldColumnFlags flags = 0); 
     void          EndColumns();                                                               
     void          PushColumnClipRect(int column_index);
     void          PushColumnsBackground();
     void          PopColumnsBackground();
     ImGuiID       GetColumnsID(const char* str_id, int count);
     ImGuiOldColumns* FindOrCreateColumns(ImGuiWindow* window, ImGuiID id);
     float         GetColumnOffsetFromNorm(const ImGuiOldColumns* columns, float offset_norm);
     float         GetColumnNormFromOffset(const ImGuiOldColumns* columns, float offset);
}
namespace ImGui
{
     ImGuiIO&         GetIO(ImGuiContext* ctx);
     ImGuiPlatformIO& GetPlatformIO(ImGuiContext* ctx);
    inline    float         GetScale()                  { ImGuiContext& g = *GImGui; return g.Style._MainScale; } 
    inline    ImGuiWindow*  GetCurrentWindowRead()      { ImGuiContext& g = *GImGui; return g.CurrentWindow; }
    inline    ImGuiWindow*  GetCurrentWindow()          { ImGuiContext& g = *GImGui; g.CurrentWindow->WriteAccessed = true; return g.CurrentWindow; }
     ImGuiWindow*  FindWindowByID(ImGuiID id);
     ImGuiWindow*  FindWindowByName(const char* name);
     void          UpdateWindowParentAndRootLinks(ImGuiWindow* window, ImGuiWindowFlags flags, ImGuiWindow* parent_window);
     void          UpdateWindowSkipRefresh(ImGuiWindow* window);
     ImVec2        CalcWindowNextAutoFitSize(ImGuiWindow* window);
     bool          IsWindowChildOf(ImGuiWindow* window, ImGuiWindow* potential_parent, bool popup_hierarchy, bool dock_hierarchy);
     bool          IsWindowInBeginStack(ImGuiWindow* window);
     bool          IsWindowWithinBeginStackOf(ImGuiWindow* window, ImGuiWindow* potential_parent);
     bool          IsWindowAbove(ImGuiWindow* potential_above, ImGuiWindow* potential_below);
     bool          IsWindowNavFocusable(ImGuiWindow* window);
     void          SetWindowPos(ImGuiWindow* window, const ImVec2& pos, ImGuiCond cond = 0);
     void          SetWindowSize(ImGuiWindow* window, const ImVec2& size, ImGuiCond cond = 0);
     void          SetWindowCollapsed(ImGuiWindow* window, bool collapsed, ImGuiCond cond = 0);
     void          SetWindowHitTestHole(ImGuiWindow* window, const ImVec2& pos, const ImVec2& size);
     void          SetWindowHiddenAndSkipItemsForCurrentFrame(ImGuiWindow* window);
    inline void             SetWindowParentWindowForFocusRoute(ImGuiWindow* window, ImGuiWindow* parent_window) { window->ParentWindowForFocusRoute = parent_window; } 
    inline ImRect           WindowRectAbsToRel(ImGuiWindow* window, const ImRect& r) { ImVec2 off = window->DC.CursorStartPos; return ImRect(r.Min.x - off.x, r.Min.y - off.y, r.Max.x - off.x, r.Max.y - off.y); }
    inline ImRect           WindowRectRelToAbs(ImGuiWindow* window, const ImRect& r) { ImVec2 off = window->DC.CursorStartPos; return ImRect(r.Min.x + off.x, r.Min.y + off.y, r.Max.x + off.x, r.Max.y + off.y); }
    inline ImVec2           WindowPosAbsToRel(ImGuiWindow* window, const ImVec2& p)  { ImVec2 off = window->DC.CursorStartPos; return ImVec2(p.x - off.x, p.y - off.y); }
    inline ImVec2           WindowPosRelToAbs(ImGuiWindow* window, const ImVec2& p)  { ImVec2 off = window->DC.CursorStartPos; return ImVec2(p.x + off.x, p.y + off.y); }
     void          SetNextWindowFlags(ImGuiWindowFlags flags, bool enabled);
     void          SetNextWindowChildFlags(ImGuiChildFlags flags, bool enabled);
     void          FocusWindow(ImGuiWindow* window, ImGuiFocusRequestFlags flags = 0);
     void          FocusTopMostWindowUnderOne(ImGuiWindow* under_this_window, ImGuiWindow* ignore_window, ImGuiViewport* filter_viewport, ImGuiFocusRequestFlags flags);
     void          BringWindowToFocusFront(ImGuiWindow* window);
     void          BringWindowToDisplayFront(ImGuiWindow* window);
     void          BringWindowToDisplayBack(ImGuiWindow* window);
     void          BringWindowToDisplayBehind(ImGuiWindow* window, ImGuiWindow* above_window);
     int           FindWindowDisplayIndex(ImGuiWindow* window);
     ImGuiWindow*  FindBottomMostVisibleWindowWithinBeginStack(ImGuiWindow* window);
     void          SetNextWindowRefreshPolicy(ImGuiWindowRefreshFlags flags);
     void          RegisterUserTexture(ImTextureData* tex); 
     void          UnregisterUserTexture(ImTextureData* tex);
     void          SetCurrentFont(ImFont* font, float font_size_before_scaling, float font_size_after_scaling);
     void          UpdateCurrentFontSize(float restore_font_size_after_scaling);
     void          SetPixelDensity(float pixel_density); 
    inline float            GetPixelDensity() { return GImGui->CurrentPixelDensity; }
    inline float            GetRoundedFontSize(float size) { return ((float)(int)((size) + 0.5f)); }
     ImFont*       GetDefaultFont();
     void          PushPasswordFont();
     void          PopPasswordFont();
    inline ImDrawList*      GetForegroundDrawList(ImGuiWindow* window) { return GetForegroundDrawList(window->Viewport); }
     void          AddDrawListToDrawDataEx(ImDrawData* draw_data, ImVector<ImDrawList*>* out_list, ImDrawList* draw_list);
     void          Initialize();
     void          Shutdown();    
     void          SetContextName(ImGuiContext* ctx, const char* name);
     ImGuiID       AddContextHook(ImGuiContext* ctx, const ImGuiContextHook* hook);
     void          RemoveContextHook(ImGuiContext* ctx, ImGuiID hook_to_remove);
     void          CallContextHooks(ImGuiContext* ctx, ImGuiContextHookType type);
     void          UpdateInputEvents(bool trickle_fast_inputs);
     void          UpdateHoveredWindowAndCaptureFlags(const ImVec2& mouse_pos);
     void          FindHoveredWindowEx(const ImVec2& pos, bool find_first_and_in_any_viewport, ImGuiWindow** out_hovered_window, ImGuiWindow** out_hovered_window_under_moving_window);
     void          StartMouseMovingWindow(ImGuiWindow* window);
     void          StartMouseMovingWindowOrNode(ImGuiWindow* window, ImGuiDockNode* node, bool undock);
     void          StopMouseMovingWindow();
     void          UpdateMouseMovingWindowNewFrame();
     void          UpdateMouseMovingWindowEndFrame();
     void          TranslateWindowsInViewport(ImGuiViewportP* viewport, const ImVec2& old_pos, const ImVec2& new_pos, const ImVec2& old_size, const ImVec2& new_size);
     void          ScaleWindowsInViewport(ImGuiViewportP* viewport, float scale);
     void          DestroyPlatformWindow(ImGuiViewportP* viewport);
     void          SetWindowViewport(ImGuiWindow* window, ImGuiViewportP* viewport);
     void          SetCurrentViewport(ImGuiWindow* window, ImGuiViewportP* viewport);
     const ImGuiPlatformMonitor*   GetViewportPlatformMonitor(ImGuiViewport* viewport);
     ImGuiViewportP*               FindHoveredViewportFromPlatformWindowStack(const ImVec2& mouse_platform_pos);
     void                  MarkIniSettingsDirty();
     void                  MarkIniSettingsDirty(ImGuiWindow* window);
     void                  ClearIniSettings();
     void                  CleanupIniSettings(ImGuiSettingsCleanupArgs* args); 
     void                  AddSettingsHandler(const ImGuiSettingsHandler* handler);
     void                  RemoveSettingsHandler(const char* type_name);
     ImGuiSettingsHandler* FindSettingsHandler(const char* type_name);
     ImGuiWindowSettings*  CreateNewWindowSettings(const char* name);
     ImGuiWindowSettings*  FindWindowSettingsByID(ImGuiID id);
     ImGuiWindowSettings*  FindWindowSettingsByWindow(ImGuiWindow* window);
     void                  ClearWindowSettings(const char* name);
     void          LocalizeRegisterEntries(const ImGuiLocEntry* entries, int count);
    inline const char*      LocalizeGetMsg(ImGuiLocKey key) { ImGuiContext& g = *GImGui; const char* msg = g.LocalizationTable[key]; return msg ? msg : "*Missing Text*"; }
     void          SetScrollX(ImGuiWindow* window, float scroll_x);
     void          SetScrollY(ImGuiWindow* window, float scroll_y);
     void          SetScrollFromPosX(ImGuiWindow* window, float local_x, float center_x_ratio);
     void          SetScrollFromPosY(ImGuiWindow* window, float local_y, float center_y_ratio);
     void          ScrollToItem(ImGuiScrollFlags flags = 0);
     void          ScrollToRect(ImGuiWindow* window, const ImRect& rect, ImGuiScrollFlags flags = 0);
     ImVec2        ScrollToRectEx(ImGuiWindow* window, const ImRect& rect, ImGuiScrollFlags flags = 0);
    inline void             ScrollToBringRectIntoView(ImGuiWindow* window, const ImRect& rect) { ScrollToRect(window, rect, ImGuiScrollFlags_KeepVisibleEdgeY); }
    inline ImGuiItemStatusFlags GetItemStatusFlags() { ImGuiContext& g = *GImGui; return g.LastItemData.StatusFlags; }
    inline ImGuiID          GetActiveID()   { ImGuiContext& g = *GImGui; return g.ActiveId; }
    inline ImGuiID          GetFocusID()    { ImGuiContext& g = *GImGui; return g.NavId; }
     void          SetActiveID(ImGuiID id, ImGuiWindow* window);
     void          SetFocusID(ImGuiID id, ImGuiWindow* window);
     void          ClearActiveID();
     ImGuiID       GetHoveredID();
     void          SetHoveredID(ImGuiID id);
     void          KeepAliveID(ImGuiID id);
     void          MarkItemEdited(ImGuiID id);     
     void          PushOverrideID(ImGuiID id);     
     ImGuiID       GetIDWithSeed(const char* str_id_begin, const char* str_id_end, ImGuiID seed);
     ImGuiID       GetIDWithSeed(int n, ImGuiID seed);
     ImGuiID       HashLabel(const char* str, const char* str_end, ImGuiID seed); 
     void          ItemSize(const ImVec2& size, float text_baseline_y = -1.0f);
    inline void             ItemSize(const ImRect& bb, float text_baseline_y = -1.0f) { ItemSize(bb.GetSize(), text_baseline_y); } 
     bool          ItemAdd(const ImRect& bb, ImGuiID id, const ImRect* nav_bb = ((void *)0), ImGuiItemFlags extra_flags = 0);
     bool          ItemHoverable(const ImRect& bb, ImGuiID id, ImGuiItemFlags item_flags);
     bool          IsWindowContentHoverable(ImGuiWindow* window, ImGuiHoveredFlags flags = 0);
     bool          IsClippedEx(const ImRect& bb, ImGuiID id);
     void          SetLastItemData(ImGuiID item_id, ImGuiItemFlags item_flags, ImGuiItemStatusFlags status_flags, const ImRect& item_rect);
     ImVec2        CalcItemSize(ImVec2 size, float default_w, float default_h);
     float         CalcWrapWidthForPos(const ImVec2& pos, float wrap_pos_x);
     void          PushMultiItemsWidths(int components, float width_full);
     void          ShrinkWidths(ImGuiShrinkWidthItem* items, int count, float width_excess, float width_min);
     void          CalcClipRectVisibleItemsY(const ImRect& clip_rect, const ImVec2& pos, float items_height, int* out_visible_start, int* out_visible_end);
     const ImGuiStyleVarInfo* GetStyleVarInfo(ImGuiStyleVar idx);
     void          BeginDisabledOverrideReenable();
     void          EndDisabledOverrideReenable();
     void          LogBegin(ImGuiLogFlags flags, int auto_open_depth);         
     void          LogToBuffer(int auto_open_depth = -1);                      
     void          LogRenderedText(const ImVec2* ref_pos, const char* text, const char* text_end = ((void *)0));
     void          LogSetNextTextDecoration(const char* prefix, const char* suffix);
     bool          BeginChildEx(const char* name, ImGuiID id, const ImVec2& size_arg, ImGuiChildFlags child_flags, ImGuiWindowFlags window_flags);
     ImGuiWindow*  FindFrontMostVisibleChildWindow(ImGuiWindow* window);
     bool          BeginPopupEx(ImGuiID id, ImGuiWindowFlags extra_window_flags);
     bool          BeginPopupMenuEx(ImGuiID id, const char* label, ImGuiWindowFlags extra_window_flags);
     bool          OpenPopupEx(ImGuiID id, ImGuiPopupFlags popup_flags = ImGuiPopupFlags_None);
     void          ClosePopupToLevel(int remaining, bool restore_focus_to_window_under_popup);
     void          ClosePopupsOverWindow(ImGuiWindow* ref_window, bool restore_focus_to_window_under_popup);
     void          ClosePopupsExceptModals();
     bool          IsPopupOpen(ImGuiID id, ImGuiPopupFlags popup_flags);
     ImRect        GetPopupAllowedExtentRect(ImGuiWindow* window);
     ImGuiWindow*  GetTopMostPopupModal();
     ImGuiWindow*  GetTopMostAndVisiblePopupModal();
     ImGuiWindow*  FindBlockingModal(ImGuiWindow* window);
     ImVec2        FindBestWindowPosForPopup(ImGuiWindow* window);
     ImVec2        FindBestWindowPosForPopupEx(const ImVec2& ref_pos, const ImVec2& size, ImGuiDir* last_dir, const ImRect& r_outer, const ImRect& r_avoid, ImGuiPopupPositionPolicy policy);
     ImGuiMouseButton GetMouseButtonFromPopupFlags(ImGuiPopupFlags flags);
     bool          IsPopupOpenRequestForItem(ImGuiPopupFlags flags, ImGuiID id);
     bool          IsPopupOpenRequestForWindow(ImGuiPopupFlags flags);
     bool          BeginTooltipEx(ImGuiTooltipFlags tooltip_flags, ImGuiWindowFlags extra_window_flags);
     bool          BeginTooltipHidden();
     bool          BeginViewportSideBar(const char* name, ImGuiViewport* viewport, ImGuiDir dir, float size, ImGuiWindowFlags window_flags);
     bool          BeginMenuEx(const char* label, const char* icon, bool enabled = true);
     bool          MenuItemEx(const char* label, const char* icon, const char* shortcut = ((void *)0), bool selected = false, bool enabled = true);
     bool          BeginComboPopup(ImGuiID popup_id, const ImRect& bb, ImGuiComboFlags flags);
     bool          BeginComboPreview(); 
     void          EndComboPreview();
     void          NavInitWindow(ImGuiWindow* window, bool force_reinit);
     void          NavInitRequestApplyResult();
     bool          NavMoveRequestButNoResultYet();
     void          NavMoveRequestSubmit(ImGuiDir move_dir, ImGuiDir clip_dir, ImGuiNavMoveFlags move_flags, ImGuiScrollFlags scroll_flags);
     void          NavMoveRequestForward(ImGuiDir move_dir, ImGuiDir clip_dir, ImGuiNavMoveFlags move_flags, ImGuiScrollFlags scroll_flags);
     void          NavMoveRequestResolveWithLastItem(ImGuiNavItemData* result);
     void          NavMoveRequestResolveWithPastTreeNode(ImGuiNavItemData* result, const ImGuiTreeNodeStackData* tree_node_data);
     void          NavMoveRequestCancel();
     void          NavMoveRequestApplyResult();
     void          NavMoveRequestTryWrapping(ImGuiWindow* window, ImGuiNavMoveFlags move_flags);
     void          NavHighlightActivated(ImGuiID id);
     void          NavClearPreferredPosForAxis(ImGuiAxis axis);
     void          SetNavCursorVisibleAfterMove();
     void          NavUpdateCurrentWindowIsScrollPushableX();
     void          SetNavWindow(ImGuiWindow* window);
     void          SetNavID(ImGuiID id, ImGuiNavLayer nav_layer, ImGuiID focus_scope_id, const ImRect& rect_rel);
     void          SetNavFocusScope(ImGuiID focus_scope_id);
     void          FocusItem();                    
     void          ActivateItemByID(ImGuiID id);   
    inline bool             IsNamedKey(ImGuiKey key)                    { return key >= ImGuiKey_NamedKey_BEGIN && key < ImGuiKey_NamedKey_END; }
    inline bool             IsNamedKeyOrMod(ImGuiKey key)               { return (key >= ImGuiKey_NamedKey_BEGIN && key < ImGuiKey_NamedKey_END) || key == ImGuiMod_Ctrl || key == ImGuiMod_Shift || key == ImGuiMod_Alt || key == ImGuiMod_Super; }
    inline bool             IsLegacyKey(ImGuiKey key)                   { return key >= 0 && key < 512; }
    inline bool             IsKeyboardKey(ImGuiKey key)                 { return key >= (ImGuiKey_NamedKey_BEGIN) && key < (ImGuiKey_GamepadStart); }
    inline bool             IsGamepadKey(ImGuiKey key)                  { return key >= (ImGuiKey_GamepadStart) && key < (ImGuiKey_GamepadRStickDown + 1); }
    inline bool             IsMouseKey(ImGuiKey key)                    { return key >= (ImGuiKey_MouseLeft) && key < (ImGuiKey_MouseWheelY + 1); }
    inline bool             IsAliasKey(ImGuiKey key)                    { return key >= ((ImGuiKey_MouseLeft)) && key < ((ImGuiKey_MouseWheelY + 1)); }
    inline bool             IsLRModKey(ImGuiKey key)                    { return key >= ImGuiKey_LeftCtrl && key <= ImGuiKey_RightSuper; }
    ImGuiKeyChord           FixupKeyChord(ImGuiKeyChord key_chord);
    inline ImGuiKey         ConvertSingleModFlagToKey(ImGuiKey key)
    {
        if (key == ImGuiMod_Ctrl) return ImGuiKey_ReservedForModCtrl;
        if (key == ImGuiMod_Shift) return ImGuiKey_ReservedForModShift;
        if (key == ImGuiMod_Alt) return ImGuiKey_ReservedForModAlt;
        if (key == ImGuiMod_Super) return ImGuiKey_ReservedForModSuper;
        return key;
    }
     ImGuiKeyData* GetKeyData(ImGuiContext* ctx, ImGuiKey key);
    inline ImGuiKeyData*    GetKeyData(ImGuiKey key)                                    { ImGuiContext& g = *GImGui; return GetKeyData(&g, key); }
     const char*   GetKeyChordName(ImGuiKeyChord key_chord);
    inline ImGuiKey         MouseButtonToKey(ImGuiMouseButton button)                   { ((void)( (!!(button >= 0 && button < ImGuiMouseButton_COUNT)) || (_wassert(L"button >= 0 && button < ImGuiMouseButton_COUNT", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(3925)), 0)) ); return (ImGuiKey)(ImGuiKey_MouseLeft + button); }
     bool          IsMouseDragPastThreshold(ImGuiMouseButton button, float lock_threshold = -1.0f);
     ImVec2        GetKeyMagnitude2d(ImGuiKey key_left, ImGuiKey key_right, ImGuiKey key_up, ImGuiKey key_down);
     float         GetNavTweakPressedAmount(ImGuiAxis axis);
     int           CalcTypematicRepeatAmount(float t0, float t1, float repeat_delay, float repeat_rate);
     void          GetTypematicRepeatRate(ImGuiInputFlags flags, float* repeat_delay, float* repeat_rate);
     void          TeleportMousePos(const ImVec2& pos);
     void          SetActiveIdUsingAllKeyboardKeys();
    inline bool             IsActiveIdUsingNavDir(ImGuiDir dir)                         { ImGuiContext& g = *GImGui; return (g.ActiveIdUsingNavDirMask & (1 << dir)) != 0; }
     ImGuiID       GetKeyOwner(ImGuiKey key);
     void          SetKeyOwner(ImGuiKey key, ImGuiID owner_id, ImGuiInputFlags flags = 0);
     void          SetKeyOwnersForKeyChord(ImGuiKeyChord key, ImGuiID owner_id, ImGuiInputFlags flags = 0);
     bool          SetItemKeyOwner(ImGuiKey key, ImGuiInputFlags flags);
     bool          TestKeyOwner(ImGuiKey key, ImGuiID owner_id);               
    inline ImGuiKeyOwnerData* GetKeyOwnerData(ImGuiContext* ctx, ImGuiKey key)          { if (key & ImGuiMod_Mask_) key = ConvertSingleModFlagToKey(key); ((void)( (!!(IsNamedKey(key))) || (_wassert(L"IsNamedKey(key)", L"Z:\\GitWorks\\Soreepeong\\Dalamud-imgui-test-2\\lib\\cimgui\\generator\\../imgui/imgui_internal.h", (unsigned)(3951)), 0)) ); return &ctx->KeysOwnerData[key - ImGuiKey_NamedKey_BEGIN]; }
     bool          IsKeyDown(ImGuiKey key, ImGuiID owner_id);
     bool          IsKeyPressed(ImGuiKey key, ImGuiInputFlags flags, ImGuiID owner_id = 0);    
     bool          IsKeyReleased(ImGuiKey key, ImGuiID owner_id);
     bool          IsKeyChordPressed(ImGuiKeyChord key_chord, ImGuiInputFlags flags, ImGuiID owner_id = 0);
     bool          IsMouseDown(ImGuiMouseButton button, ImGuiID owner_id);
     bool          IsMouseClicked(ImGuiMouseButton button, ImGuiInputFlags flags, ImGuiID owner_id = 0);
     bool          IsMouseReleased(ImGuiMouseButton button, ImGuiID owner_id);
     bool          IsMouseDoubleClicked(ImGuiMouseButton button, ImGuiID owner_id);
     bool          Shortcut(ImGuiKeyChord key_chord, ImGuiInputFlags flags, ImGuiID owner_id);
     bool          SetShortcutRouting(ImGuiKeyChord key_chord, ImGuiInputFlags flags, ImGuiID owner_id); 
     bool          TestShortcutRouting(ImGuiKeyChord key_chord, ImGuiID owner_id);
     ImGuiKeyRoutingData* GetShortcutRoutingData(ImGuiKeyChord key_chord);
     void          DockContextInitialize(ImGuiContext* ctx);
     void          DockContextShutdown(ImGuiContext* ctx);
     void          DockContextClearNodes(ImGuiContext* ctx, ImGuiID root_id, bool clear_settings_refs); 
     void          DockContextRebuildNodes(ImGuiContext* ctx);
     void          DockContextNewFrameUpdateUndocking(ImGuiContext* ctx);
     void          DockContextNewFrameUpdateDocking(ImGuiContext* ctx);
     void          DockContextEndFrame(ImGuiContext* ctx);
     ImGuiID       DockContextGenNodeID(ImGuiContext* ctx);
     void          DockContextQueueDock(ImGuiContext* ctx, ImGuiWindow* target, ImGuiDockNode* target_node, ImGuiWindow* payload, ImGuiDir split_dir, float split_ratio, bool split_outer);
     void          DockContextQueueUndockWindow(ImGuiContext* ctx, ImGuiWindow* window);
     void          DockContextQueueUndockNode(ImGuiContext* ctx, ImGuiDockNode* node);
     void          DockContextProcessUndockWindow(ImGuiContext* ctx, ImGuiWindow* window, bool clear_persistent_docking_ref = true);
     void          DockContextProcessUndockNode(ImGuiContext* ctx, ImGuiDockNode* node);
     bool          DockContextCalcDropPosForDocking(ImGuiWindow* target, ImGuiDockNode* target_node, ImGuiWindow* payload_window, ImGuiDockNode* payload_node, ImGuiDir split_dir, bool split_outer, ImVec2* out_pos);
     ImGuiDockNode*DockContextFindNodeByID(ImGuiContext* ctx, ImGuiID id);
     void          DockNodeWindowMenuHandler_Default(ImGuiContext* ctx, ImGuiDockNode* node, ImGuiTabBar* tab_bar);
     bool          DockNodeBeginAmendTabBar(ImGuiDockNode* node);
     void          DockNodeEndAmendTabBar();
    inline ImGuiDockNode*   DockNodeGetRootNode(ImGuiDockNode* node)                 { while (node->ParentNode) node = node->ParentNode; return node; }
    inline bool             DockNodeIsInHierarchyOf(ImGuiDockNode* node, ImGuiDockNode* parent) { while (node) { if (node == parent) return true; node = node->ParentNode; } return false; }
    inline int              DockNodeGetDepth(const ImGuiDockNode* node)              { int depth = 0; while (node->ParentNode) { node = node->ParentNode; depth++; } return depth; }
    inline ImGuiID          DockNodeGetWindowMenuButtonId(const ImGuiDockNode* node) { return ImHashStr("#COLLAPSE", 0, node->ID); }
    inline ImGuiDockNode*   GetWindowDockNode()                                      { ImGuiContext& g = *GImGui; return g.CurrentWindow->DockNode; }
     bool          GetWindowAlwaysWantOwnTabBar(ImGuiWindow* window);
     void          BeginDocked(ImGuiWindow* window, bool* p_open);
     void          BeginDockableDragDropSource(ImGuiWindow* window);
     void          BeginDockableDragDropTarget(ImGuiWindow* window);
     void          SetWindowDock(ImGuiWindow* window, ImGuiID dock_id, ImGuiCond cond);
     void          DockBuilderDockWindow(const char* window_name, ImGuiID node_id);
     ImGuiDockNode*DockBuilderGetNode(ImGuiID node_id);
    inline ImGuiDockNode*   DockBuilderGetCentralNode(ImGuiID node_id)              { ImGuiDockNode* node = DockBuilderGetNode(node_id); if (!node) return ((void *)0); return DockNodeGetRootNode(node)->CentralNode; }
     ImGuiID       DockBuilderAddNode(ImGuiID node_id = 0, ImGuiDockNodeFlags flags = 0);
     void          DockBuilderRemoveNode(ImGuiID node_id);                 
     void          DockBuilderRemoveNodeDockedWindows(ImGuiID node_id, bool clear_settings_refs = true);
     void          DockBuilderRemoveNodeChildNodes(ImGuiID node_id);       
     void          DockBuilderSetNodePos(ImGuiID node_id, ImVec2 pos);
     void          DockBuilderSetNodeSize(ImGuiID node_id, ImVec2 size);
     ImGuiID       DockBuilderSplitNode(ImGuiID node_id, ImGuiDir split_dir, float size_ratio_for_node_at_dir, ImGuiID* out_id_at_dir, ImGuiID* out_id_at_opposite_dir); 
     void          DockBuilderCopyDockSpace(ImGuiID src_dockspace_id, ImGuiID dst_dockspace_id, ImVector<const char*>* in_window_remap_pairs);
     void          DockBuilderCopyNode(ImGuiID src_node_id, ImGuiID dst_node_id, ImVector<ImGuiID>* out_node_remap_pairs);
     void          DockBuilderCopyWindowSettings(const char* src_name, const char* dst_name);
     void          DockBuilderFinish(ImGuiID node_id);
     void          PushFocusScope(ImGuiID id);
     void          PopFocusScope();
     bool          IsInNavFocusRoute(ImGuiID focus_scope_id);
    inline ImGuiID          GetCurrentFocusScope() { ImGuiContext& g = *GImGui; return g.CurrentFocusScopeId; }   
     bool          IsDragDropActive();
     bool          BeginDragDropTargetCustom(const ImRect& bb, ImGuiID id);
     bool          BeginDragDropTargetViewport(ImGuiViewport* viewport, const ImRect* p_bb = ((void *)0));
     void          ClearDragDrop();
     bool          IsDragDropPayloadBeingAccepted();
     void          RenderDragDropTargetRectForItem(const ImRect& bb);
     void          RenderDragDropTargetRectForViewport(ImGuiID viewport_id, const ImRect& bb);
     void          RenderDragDropTargetRectEx(ImDrawList* draw_list, const ImRect& bb, float rounding);
     ImGuiTypingSelectRequest* GetTypingSelectRequest(ImGuiTypingSelectFlags flags = ImGuiTypingSelectFlags_None);
     int           TypingSelectFindMatch(ImGuiTypingSelectRequest* req, int items_count, const char* (*get_item_name_func)(void*, int), void* user_data, int nav_item_idx);
     int           TypingSelectFindNextSingleCharMatch(ImGuiTypingSelectRequest* req, int items_count, const char* (*get_item_name_func)(void*, int), void* user_data, int nav_item_idx);
     int           TypingSelectFindBestLeadingMatch(ImGuiTypingSelectRequest* req, int items_count, const char* (*get_item_name_func)(void*, int), void* user_data);
     bool          BeginBoxSelect(const ImRect& scope_rect, ImGuiWindow* window, ImGuiID box_select_id, ImGuiMultiSelectFlags ms_flags);
     void          EndBoxSelect(const ImRect& scope_rect, ImGuiMultiSelectFlags ms_flags);
     void          MultiSelectItemHeader(ImGuiID id, bool* p_selected, ImGuiButtonFlags* p_button_flags);
     void          MultiSelectItemFooter(ImGuiID id, bool* p_selected, bool* p_pressed, ImGuiMultiSelectFlags extra_flags = 0);
     void          MultiSelectAddSetAll(ImGuiMultiSelectTempData* ms, bool selected);
     void          MultiSelectAddSetRange(ImGuiMultiSelectTempData* ms, bool selected, int range_dir, ImGuiSelectionUserData first_item, ImGuiSelectionUserData last_item);
    inline ImGuiBoxSelectState*     GetBoxSelectState(ImGuiID id)   { ImGuiContext& g = *GImGui; return (id != 0 && g.BoxSelectState.ID == id && g.BoxSelectState.IsActive) ? &g.BoxSelectState : ((void *)0); }
    inline ImGuiMultiSelectState*   GetMultiSelectState(ImGuiID id) { ImGuiContext& g = *GImGui; return g.MultiSelectStorage.GetByKey(id); }
    inline    ImGuiTabBar*  GetCurrentTabBar() { ImGuiContext& g = *GImGui; return g.CurrentTabBar; }
     ImGuiTabBar*  TabBarFindByID(ImGuiID id);
     void          TabBarRemove(ImGuiTabBar* tab_bar);
     bool          BeginTabBarEx(ImGuiTabBar* tab_bar, const ImRect& bb, ImGuiTabBarFlags flags);
     ImGuiTabItem* TabBarFindTabByID(ImGuiTabBar* tab_bar, ImGuiID tab_id);
     ImGuiTabItem* TabBarFindTabByOrder(ImGuiTabBar* tab_bar, int order);
     ImGuiTabItem* TabBarFindMostRecentlySelectedTabForActiveWindow(ImGuiTabBar* tab_bar);
     ImGuiTabItem* TabBarGetCurrentTab(ImGuiTabBar* tab_bar);
    inline int              TabBarGetTabOrder(ImGuiTabBar* tab_bar, ImGuiTabItem* tab) { return tab_bar->Tabs.index_from_ptr(tab); }
     const char*   TabBarGetTabName(ImGuiTabBar* tab_bar, ImGuiTabItem* tab);
     ImVec2        TabBarGetTabPos(ImGuiTabBar* tab_bar, ImGuiTabItem* tab);
     void          TabBarAddTab(ImGuiTabBar* tab_bar, ImGuiTabItemFlags tab_flags, ImGuiWindow* window);
     void          TabBarRemoveTab(ImGuiTabBar* tab_bar, ImGuiID tab_id);
     void          TabBarCloseTab(ImGuiTabBar* tab_bar, ImGuiTabItem* tab);
     void          TabBarQueueFocus(ImGuiTabBar* tab_bar, ImGuiTabItem* tab);
     void          TabBarQueueFocus(ImGuiTabBar* tab_bar, const char* tab_name);
     void          TabBarQueueReorder(ImGuiTabBar* tab_bar, ImGuiTabItem* tab, int offset);
     void          TabBarQueueReorderFromMousePos(ImGuiTabBar* tab_bar, ImGuiTabItem* tab, ImVec2 mouse_pos);
     bool          TabBarProcessReorder(ImGuiTabBar* tab_bar);
     bool          TabItemEx(ImGuiTabBar* tab_bar, const char* label, bool* p_open, ImGuiTabItemFlags flags, ImGuiWindow* docked_window);
     bool          TabItemIsContentsAppearing();
     void          TabItemSpacing(const char* str_id, ImGuiTabItemFlags flags, float width);
     ImVec2        TabItemCalcSize(const char* label, bool has_close_button_or_unsaved_marker);
     ImVec2        TabItemCalcSize(ImGuiWindow* window);
     void          TabItemBackground(ImDrawList* draw_list, const ImRect& bb, ImGuiTabItemFlags flags, ImU32 col);
     void          TabItemLabelAndCloseButton(ImDrawList* draw_list, const ImRect& bb, ImGuiTabItemFlags flags, ImVec2 frame_padding, const char* label, ImGuiID tab_id, ImGuiID close_button_id, bool is_contents_visible, bool* out_just_closed, bool* out_text_clipped);
     void          RenderText(ImVec2 pos, const char* text, const char* text_end = ((void *)0), bool hide_text_after_hash = true);
     void          RenderTextWrapped(ImVec2 pos, const char* text, const char* text_end, float wrap_width);
     void          RenderTextClipped(const ImVec2& pos_min, const ImVec2& pos_max, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImVec2& align = ImVec2(0, 0), const ImRect* clip_rect = ((void *)0));
     void          RenderTextClippedEx(ImDrawList* draw_list, const ImVec2& pos_min, const ImVec2& pos_max, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImVec2& align = ImVec2(0, 0), const ImRect* clip_rect = ((void *)0));
     void          RenderTextEllipsis(ImDrawList* draw_list, const ImVec2& pos_min, const ImVec2& pos_max, float ellipsis_max_x, const char* text, const char* text_end, const ImVec2* text_size_if_known);
     void          RenderFrame(ImVec2 p_min, ImVec2 p_max, ImU32 fill_col, bool borders = true, float rounding = 0.0f);
     void          RenderFrameBorder(ImVec2 p_min, ImVec2 p_max, float rounding = 0.0f);
     void          RenderColorComponentMarker(const ImRect& bb, ImU32 col, float rounding);
     void          RenderColorRectWithAlphaCheckerboard(ImDrawList* draw_list, ImVec2 p_min, ImVec2 p_max, ImU32 col, float alpha, float grid_step, ImVec2 grid_off, float rounding = 0.0f, ImDrawFlags flags = 0);
     void          RenderNavCursor(const ImRect& bb, ImGuiID id, ImGuiNavRenderCursorFlags flags = ImGuiNavRenderCursorFlags_None, float rounding = -1.0f); 
     const char*   FindRenderedTextEnd(const char* text, const char* text_end = ((void *)0)); 
     void          RenderMouseCursor(ImVec2 pos, float scale, ImGuiMouseCursor mouse_cursor, ImU32 col_fill, ImU32 col_border, ImU32 col_shadow);
     void          RenderArrow(ImDrawList* draw_list, ImVec2 pos, ImU32 col, ImGuiDir dir, float scale = 1.0f);
     void          RenderArrowEx(ImDrawList* draw_list, ImVec2 pos, ImU32 col, float cos_a, float sin_a, float scale, ImVec2 arrow_sizes, float arrow_th);
     void          RenderBullet(ImDrawList* draw_list, ImVec2 pos, ImU32 col);
     void          RenderCheckMark(ImDrawList* draw_list, ImVec2 pos, ImU32 col, float sz);
     void          RenderArrowDockMenu(ImDrawList* draw_list, ImVec2 p_min, float sz, ImU32 col);
     void          RenderRectFilledInRangeH(ImDrawList* draw_list, const ImRect& rect, ImU32 col, float fill_x0, float fill_x1, float rounding);
     void          RenderRectFilledWithHole(ImDrawList* draw_list, const ImRect& outer, const ImRect& inner, ImU32 col, float rounding);
     ImDrawFlags   CalcRoundingFlagsForRectInRect(const ImRect& r_in, const ImRect& r_outer, float threshold);
     void          TextEx(const char* text, const char* text_end = ((void *)0), ImGuiTextFlags flags = 0);
     void          TextAligned(float align_x, float width, const char* fmt, ...) ; 
     void          TextAlignedV(float align_x, float width, const char* fmt, va_list args) ;
     bool          ButtonEx(const char* label, const ImVec2& size_arg = ImVec2(0, 0), ImGuiButtonFlags flags = 0);
     bool          ArrowButtonEx(const char* str_id, ImGuiDir dir, ImVec2 size_arg, ImGuiButtonFlags flags = 0);
     bool          ImageButtonEx(ImGuiID id, ImTextureRef tex_ref, const ImVec2& image_size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& bg_col, const ImVec4& tint_col, ImGuiButtonFlags flags = 0);
     void          SeparatorEx(ImGuiSeparatorFlags flags, float thickness = 1.0f);
     void          SeparatorTextEx(ImGuiID id, const char* label, const char* label_end, float extra_width);
     bool          CheckboxFlags(const char* label, ImS64* flags, ImS64 flags_value);
     bool          CheckboxFlags(const char* label, ImU64* flags, ImU64 flags_value);
     bool          CloseButton(ImGuiID id, const ImVec2& pos);
     bool          CollapseButton(ImGuiID id, const ImVec2& pos, ImGuiDockNode* dock_node);
     void          Scrollbar(ImGuiAxis axis);
     bool          ScrollbarEx(const ImRect& bb, ImGuiID id, ImGuiAxis axis, ImS64* p_scroll_v, ImS64 avail_v, ImS64 contents_v, ImDrawFlags draw_rounding_flags = 0);
     ImRect        GetWindowScrollbarRect(ImGuiWindow* window, ImGuiAxis axis);
     ImGuiID       GetWindowScrollbarID(ImGuiWindow* window, ImGuiAxis axis);
     ImGuiID       GetWindowResizeCornerID(ImGuiWindow* window, int n); 
     ImGuiID       GetWindowResizeBorderID(ImGuiWindow* window, ImGuiDir dir);
     void          ExtendHitBoxWhenNearViewportEdge(ImGuiWindow* window, ImRect* bb, float threshold, ImGuiAxis axis);
     bool          ButtonBehavior(const ImRect& bb, ImGuiID id, bool* out_hovered, bool* out_held, ImGuiButtonFlags flags = 0);
     bool          DragBehavior(ImGuiID id, ImGuiDataType data_type, void* p_v, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags);
     bool          SliderBehavior(const ImRect& bb, ImGuiID id, ImGuiDataType data_type, void* p_v, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags, ImRect* out_grab_bb);
     bool          SplitterBehavior(const ImRect& bb, ImGuiID id, ImGuiAxis axis, float* size1, float* size2, float min_size1, float min_size2, float hover_extend = 0.0f, float hover_visibility_delay = 0.0f, ImU32 bg_col = 0);
     bool          TreeNodeBehavior(ImGuiID id, ImGuiTreeNodeFlags flags, const char* label, const char* label_end = ((void *)0));
     void          TreeNodeDrawLineToChildNode(const ImVec2& target_pos);
     void          TreeNodeDrawLineToTreePop(const ImGuiTreeNodeStackData* data);
     void          TreePushOverrideID(ImGuiID id);
     void          TreeNodeSetOpen(ImGuiID storage_id, bool open);
     bool          TreeNodeUpdateNextOpen(ImGuiID storage_id, ImGuiTreeNodeFlags flags);   
    template<typename T, typename SIGNED_T, typename FLOAT_T>    float ScaleRatioFromValueT(ImGuiDataType data_type, T v, T v_min, T v_max, float logarithmic_zero_epsilon, float zero_deadzone_size);
    template<typename T, typename SIGNED_T, typename FLOAT_T>    T     ScaleValueFromRatioT(ImGuiDataType data_type, float t, T v_min, T v_max, float logarithmic_zero_epsilon, float zero_deadzone_size);
    template<typename T, typename SIGNED_T, typename FLOAT_T>    bool  DragBehaviorT(ImGuiDataType data_type, T* v, float v_speed, T v_min, T v_max, const char* format, ImGuiSliderFlags flags);
    template<typename T, typename SIGNED_T, typename FLOAT_T>    bool  SliderBehaviorT(const ImRect& bb, ImGuiID id, ImGuiDataType data_type, T* v, T v_min, T v_max, const char* format, ImGuiSliderFlags flags, ImRect* out_grab_bb);
    template<typename T>                                         T     RoundScalarWithFormatT(const char* format, ImGuiDataType data_type, T v);
    template<typename T>                                         bool  CheckboxFlagsT(const char* label, T* flags, T flags_value);
     const ImGuiDataTypeInfo*  DataTypeGetInfo(ImGuiDataType data_type);
     int           DataTypeFormatString(char* buf, int buf_size, ImGuiDataType data_type, const void* p_data, const char* format);
     void          DataTypeApplyOp(ImGuiDataType data_type, int op, void* output, const void* arg_1, const void* arg_2);
     bool          DataTypeApplyFromText(const char* buf, ImGuiDataType data_type, void* p_data, const char* format, void* p_data_when_empty = ((void *)0));
     int           DataTypeCompare(ImGuiDataType data_type, const void* arg_1, const void* arg_2);
     bool          DataTypeClamp(ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max);
     bool          DataTypeIsZero(ImGuiDataType data_type, const void* p_data);
     bool          InputTextEx(const char* label, const char* hint, char* buf, int buf_size, const ImVec2& size_arg, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback = ((void *)0), void* user_data = ((void *)0));
     void          InputTextDeactivateHook(ImGuiID id);
     bool          TempInputText(const ImRect& bb, ImGuiID id, const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = ((void *)0), void* user_data = ((void *)0));
     bool          TempInputScalar(const ImRect& bb, ImGuiID id, const char* label, ImGuiDataType data_type, void* p_data, const char* format, const void* p_clamp_min = ((void *)0), const void* p_clamp_max = ((void *)0));
    inline bool             TempInputIsActive(ImGuiID id)       { ImGuiContext& g = *GImGui; return (g.TempInputId == id && g.ActiveId == id) || (g.InputTextDeactivatedState.ID == id); }
    inline ImGuiInputTextState* GetInputTextState(ImGuiID id)   { ImGuiContext& g = *GImGui; return (id != 0 && g.InputTextState.ID == id) ? &g.InputTextState : ((void *)0); } 
     void          SetNextItemRefVal(ImGuiDataType data_type, void* p_data);
    inline bool             IsItemActiveAsInputText() { ImGuiContext& g = *GImGui; return g.ActiveId != 0 && g.ActiveId == g.LastItemData.ID && g.InputTextState.ID == g.LastItemData.ID; } 
     void Custom_StbTextMakeUndoReplace(ImGuiInputTextState* str, int where, int old_length, int new_length);
     void Custom_StbTextUndo(ImGuiInputTextState* str);
     void          ColorTooltip(const char* text, const float* col, ImGuiColorEditFlags flags);
     void          ColorEditOptionsPopup(const float* col, ImGuiColorEditFlags flags);
     void          ColorPickerOptionsPopup(const float* ref_col, ImGuiColorEditFlags flags);
    inline void             SetNextItemColorMarker(ImU32 col) { ImGuiContext& g = *GImGui; g.NextItemData.HasFlags |= ImGuiNextItemDataFlags_HasColorMarker; g.NextItemData.ColorMarker = col; }
     int           PlotEx(ImGuiPlotType plot_type, const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, const ImVec2& size_arg);
     void          ShadeVertsLinearColorGradientKeepAlpha(ImDrawList* draw_list, int vert_start_idx, int vert_end_idx, ImVec2 gradient_p0, ImVec2 gradient_p1, ImU32 col0, ImU32 col1);
     void          ShadeVertsLinearUV(ImDrawList* draw_list, int vert_start_idx, int vert_end_idx, const ImVec2& a, const ImVec2& b, const ImVec2& uv_a, const ImVec2& uv_b, bool clamp);
     void          ShadeVertsTransformPos(ImDrawList* draw_list, int vert_start_idx, int vert_end_idx, const ImVec2& pivot_in, float cos_a, float sin_a, const ImVec2& pivot_out);
     void          GcCompactTransientMiscBuffers();
     void          GcCompactTransientWindowBuffers(ImGuiWindow* window);
     void          GcAwakeTransientWindowBuffers(ImGuiWindow* window);
     bool          ErrorLog(const char* msg);
     void          ErrorRecoveryStoreState(ImGuiErrorRecoveryState* state_out);
     void          ErrorRecoveryTryToRecoverState(const ImGuiErrorRecoveryState* state_in);
     void          ErrorRecoveryTryToRecoverWindowState(const ImGuiErrorRecoveryState* state_in);
     void          ErrorCheckUsingSetCursorPosToExtendParentBoundaries();
     void          ErrorCheckEndFrameFinalizeErrorTooltip();
     bool          BeginErrorTooltip();
     void          EndErrorTooltip();
     void          DemoMarker(const char* file, int line, const char* section);
     void          DebugAllocHook(ImGuiDebugAllocInfo* info, int frame_count, void* ptr, size_t size); 
     void          DebugDrawCursorPos(ImU32 col = (((ImU32)(255)<<24) | ((ImU32)(0)<<16) | ((ImU32)(0)<<8) | ((ImU32)(255)<<0)));
     void          DebugDrawLineExtents(ImU32 col = (((ImU32)(255)<<24) | ((ImU32)(0)<<16) | ((ImU32)(0)<<8) | ((ImU32)(255)<<0)));
     void          DebugDrawItemRect(ImU32 col = (((ImU32)(255)<<24) | ((ImU32)(0)<<16) | ((ImU32)(0)<<8) | ((ImU32)(255)<<0)));
     void          DebugTextUnformattedWithLocateItem(const char* line_begin, const char* line_end);
     void          DebugLocateItem(ImGuiID target_id);                     
     void          DebugLocateItemOnHover(ImGuiID target_id);              
     void          DebugLocateItemResolveWithLastItem();
     void          DebugBreakClearData();
     bool          DebugBreakButton(const char* label, const char* description_of_location);
     void          DebugBreakButtonTooltip(bool keyboard_only, const char* description_of_location);
     ImU64         DebugTextureIDToU64(ImTextureID tex_id);
     void          DebugHookIdInfo(ImGuiID id, ImGuiDataType data_type, const void* data_id, const void* data_id_end);
     void          DebugNodeColumns(ImGuiOldColumns* columns);
     void          DebugNodeDockNode(ImGuiDockNode* node, const char* label);
     void          DebugNodeDrawList(ImGuiWindow* window, ImGuiViewportP* viewport, const ImDrawList* draw_list, const char* label);
     void          DebugNodeDrawCmdShowMeshAndBoundingBox(ImDrawList* out_draw_list, const ImDrawList* draw_list, const ImDrawCmd* draw_cmd, bool show_mesh, bool show_aabb);
     void          DebugNodeTexture(ImTextureData* tex, int int_id, const ImTextureRect* highlight_rect = ((void *)0)); 
     void          DebugNodeStorage(ImGuiStorage* storage, const char* label);
     void          DebugNodeTabBar(ImGuiTabBar* tab_bar, const char* label);
     void          DebugNodeTable(ImGuiTable* table);
     void          DebugNodeTableSettings(ImGuiTableSettings* settings, ImGuiTable* table);
     void          DebugNodeInputTextState(ImGuiInputTextState* state);
     void          DebugNodeTypingSelectState(ImGuiTypingSelectState* state);
     void          DebugNodeMultiSelectState(ImGuiMultiSelectState* state);
     void          DebugNodeWindow(ImGuiWindow* window, const char* label);
     void          DebugNodeWindowSettings(ImGuiWindowSettings* settings);
     void          DebugNodeWindowsList(ImVector<ImGuiWindow*>* windows, const char* label);
     void          DebugNodeWindowsListByBeginStackParent(ImGuiWindow** windows, int windows_size, ImGuiWindow* parent_in_begin_stack);
     void          DebugNodeViewport(ImGuiViewportP* viewport);
     void          DebugNodePlatformMonitor(ImGuiPlatformMonitor* monitor, const char* label, int idx);
     void          DebugRenderKeyboardPreview(ImDrawList* draw_list);
     void          DebugRenderViewportThumbnail(ImDrawList* draw_list, ImGuiViewportP* viewport, const ImRect& bb);
} 
inline bool operator==(const ImTextureRef& lhs, const ImTextureRef& rhs)    { return lhs._TexID == rhs._TexID && lhs._TexData == rhs._TexData; }
inline bool operator!=(const ImTextureRef& lhs, const ImTextureRef& rhs)    { return lhs._TexID != rhs._TexID || lhs._TexData != rhs._TexData; }
 bool              ImTextureDataUpdateNewFrame(ImTextureData* tex);
 void              ImTextureDataQueueUpload(ImTextureData* tex, int x, int y, int w, int h);
 int               ImTextureDataGetFormatBytesPerPixel(ImTextureFormat format);
 const char*       ImTextureDataGetStatusName(ImTextureStatus status);
 const char*       ImTextureDataGetFormatName(ImTextureFormat format);
typedef struct
{
   int  where;
   int  insert_length;
   int  delete_length;
   int                        char_storage;
} StbUndoRecord;
typedef struct
{
   StbUndoRecord          undo_rec [99];
   char  undo_char[999];
   short undo_point, redo_point;
   int undo_char_point, redo_char_point;
} StbUndoState;
typedef struct STB_TexteditState
{
   int cursor;
   int select_start;          
   int select_end;
   unsigned char insert_mode;
   int row_count_per_page;
   unsigned char cursor_at_end_of_line; 
   unsigned char initialized;
   unsigned char has_preferred_x;
   unsigned char single_line;
   unsigned char padding1, padding2, padding3;
   float preferred_x; 
   StbUndoState undostate;
} STB_TexteditState;
typedef struct
{
   float x0,x1;             
   float baseline_y_delta;  
   float ymin,ymax;         
   int num_chars;
} StbTexteditRow;
struct ImFontAtlas;
struct ImFontLoader;
typedef unsigned int ImGuiFreeTypeLoaderFlags;
enum ImGuiFreeTypeLoaderFlags_
{
    ImGuiFreeTypeLoaderFlags_NoHinting     = 1 << 0,   
    ImGuiFreeTypeLoaderFlags_NoAutoHint    = 1 << 1,   
    ImGuiFreeTypeLoaderFlags_ForceAutoHint = 1 << 2,   
    ImGuiFreeTypeLoaderFlags_LightHinting  = 1 << 3,   
    ImGuiFreeTypeLoaderFlags_MonoHinting   = 1 << 4,   
    ImGuiFreeTypeLoaderFlags_Bold          = 1 << 5,   
    ImGuiFreeTypeLoaderFlags_Oblique       = 1 << 6,   
    ImGuiFreeTypeLoaderFlags_Monochrome    = 1 << 7,   
    ImGuiFreeTypeLoaderFlags_LoadColor     = 1 << 8,   
    ImGuiFreeTypeLoaderFlags_Bitmap        = 1 << 9,   
};
namespace ImGuiFreeType
{
     const ImFontLoader*       GetFontLoader();
     void                      SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = nullptr);
     bool                      DebugEditFontLoaderFlags(ImGuiFreeTypeLoaderFlags* p_font_loader_flags);
}