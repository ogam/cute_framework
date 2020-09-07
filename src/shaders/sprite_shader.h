#pragma once
/*
    #version:1# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Overview:

        Shader program 'sprite':
            Get shader desc: default_sprite_shader_desc()
            Vertex shader: vs
                Attribute slots:
                    ATTR_default_vs_in_pos = 0
                    ATTR_default_vs_in_uv = 1
                    ATTR_default_vs_in_alpha = 2
                Uniform block 'vs_params':
                    C struct: default_vs_params_t
                    Bind slot: SLOT_default_vs_params = 0
            Fragment shader: fs
                Image 'u_image':
                    Type: SG_IMAGETYPE_2D
                    Component Type: SG_SAMPLERTYPE_FLOAT
                    Bind slot: SLOT_default_u_image = 0


    Shader descriptor structs:

        sg_shader sprite = sg_make_shader(default_sprite_shader_desc());

    Vertex attribute locations for vertex shader 'vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_default_vs_in_pos] = { ... },
                    [ATTR_default_vs_in_uv] = { ... },
                    [ATTR_default_vs_in_alpha] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]

        SLOT_default_u_image = 0;

    Bind slot and C-struct for uniform block 'vs_params':

        default_vs_params_t vs_params = {
            .u_mvp = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_default_vs_params, &vs_params, sizeof(vs_params));

*/
#include <stdint.h>
#include <stdbool.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_default_vs_in_pos (0)
#define ATTR_default_vs_in_uv (1)
#define ATTR_default_vs_in_alpha (2)
#define SLOT_default_u_image (0)
#define SLOT_default_vs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct default_vs_params_t {
    cute::matrix_t u_mvp;
} default_vs_params_t;
#pragma pack(pop)
#if defined(SOKOL_GLCORE33)
/*
    #version 330
    
    uniform vec4 vs_params[4];
    out vec2 uv;
    layout(location = 1) in vec2 in_uv;
    out float alpha;
    layout(location = 2) in float in_alpha;
    layout(location = 0) in vec2 in_pos;
    
    void main()
    {
        uv = in_uv;
        alpha = in_alpha;
        gl_Position = mat4(vs_params[0], vs_params[1], vs_params[2], vs_params[3]) * vec4(ceil(in_pos), 0.0, 1.0);
    }
    
*/
static const char default_vs_source_glsl330[352] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x34,0x5d,0x3b,0x0a,0x6f,0x75,0x74,0x20,0x76,0x65,0x63,
    0x32,0x20,0x75,0x76,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,
    0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x31,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,
    0x63,0x32,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x6f,0x75,0x74,0x20,0x66,0x6c,
    0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,
    0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x32,0x29,0x20,
    0x69,0x6e,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,
    0x61,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,
    0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,
    0x69,0x6e,0x5f,0x70,0x6f,0x73,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,
    0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x75,0x76,0x20,0x3d,0x20,
    0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x20,0x20,0x20,0x20,0x61,0x6c,0x70,0x68,0x61,
    0x20,0x3d,0x20,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x20,0x20,0x20,
    0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x6d,
    0x61,0x74,0x34,0x28,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,
    0x2c,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,
    0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2c,0x20,0x76,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,0x29,0x20,0x2a,0x20,0x76,0x65,
    0x63,0x34,0x28,0x63,0x65,0x69,0x6c,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x29,0x2c,
    0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,

};
/*
    #version 330
    
    uniform sampler2D u_image;
    
    in vec2 uv;
    in float alpha;
    layout(location = 0) out vec4 result;
    
    void main()
    {
        vec4 _20 = texture(u_image, uv);
        float _29 = _20.w * alpha;
        vec4 _44 = _20;
        _44.w = _29;
        if (_29 < 9.9999997473787516355514526367188e-06)
        {
            discard;
        }
        result = _44;
    }
    
*/
static const char default_fs_source_glsl330[332] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x32,0x44,0x20,
    0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x3b,0x0a,0x0a,0x69,0x6e,0x20,0x76,0x65,0x63,
    0x32,0x20,0x75,0x76,0x3b,0x0a,0x69,0x6e,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,
    0x6c,0x70,0x68,0x61,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,
    0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x6f,0x75,0x74,0x20,0x76,
    0x65,0x63,0x34,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x76,
    0x65,0x63,0x34,0x20,0x5f,0x32,0x30,0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,
    0x65,0x28,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x2c,0x20,0x75,0x76,0x29,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x5f,0x32,0x39,0x20,0x3d,0x20,
    0x5f,0x32,0x30,0x2e,0x77,0x20,0x2a,0x20,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x76,0x65,0x63,0x34,0x20,0x5f,0x34,0x34,0x20,0x3d,0x20,0x5f,0x32,
    0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,0x34,0x34,0x2e,0x77,0x20,0x3d,0x20,0x5f,
    0x32,0x39,0x3b,0x0a,0x20,0x20,0x20,0x20,0x69,0x66,0x20,0x28,0x5f,0x32,0x39,0x20,
    0x3c,0x20,0x39,0x2e,0x39,0x39,0x39,0x39,0x39,0x39,0x37,0x34,0x37,0x33,0x37,0x38,
    0x37,0x35,0x31,0x36,0x33,0x35,0x35,0x35,0x31,0x34,0x35,0x32,0x36,0x33,0x36,0x37,
    0x31,0x38,0x38,0x65,0x2d,0x30,0x36,0x29,0x0a,0x20,0x20,0x20,0x20,0x7b,0x0a,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x69,0x73,0x63,0x61,0x72,0x64,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,
    0x20,0x3d,0x20,0x5f,0x34,0x34,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
#endif /* SOKOL_GLCORE33 */
#if defined(SOKOL_D3D11)
/*
    cbuffer vs_params : register(b0)
    {
        row_major float4x4 _31_u_mvp : packoffset(c0);
    };
    
    
    static float4 gl_Position;
    static float2 uv;
    static float2 in_uv;
    static float alpha;
    static float in_alpha;
    static float2 in_pos;
    
    struct SPIRV_Cross_Input
    {
        float2 in_pos : TEXCOORD0;
        float2 in_uv : TEXCOORD1;
        float in_alpha : TEXCOORD2;
    };
    
    struct SPIRV_Cross_Output
    {
        float2 uv : TEXCOORD0;
        float alpha : TEXCOORD1;
        float4 gl_Position : SV_Position;
    };
    
    #line 19 ""
    void vert_main()
    {
    #line 19 ""
        uv = in_uv;
    #line 20 ""
        alpha = in_alpha;
    #line 21 ""
        gl_Position = mul(float4(ceil(in_pos), 0.0f, 1.0f), _31_u_mvp);
    }
    
    SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
    {
        in_uv = stage_input.in_uv;
        in_alpha = stage_input.in_alpha;
        in_pos = stage_input.in_pos;
        vert_main();
        SPIRV_Cross_Output stage_output;
        stage_output.gl_Position = gl_Position;
        stage_output.uv = uv;
        stage_output.alpha = alpha;
        return stage_output;
    }
*/
static const char default_vs_source_hlsl5[991] = {
    0x63,0x62,0x75,0x66,0x66,0x65,0x72,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x20,0x3a,0x20,0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x28,0x62,0x30,0x29,
    0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x72,0x6f,0x77,0x5f,0x6d,0x61,0x6a,0x6f,0x72,
    0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x78,0x34,0x20,0x5f,0x33,0x31,0x5f,0x75,0x5f,
    0x6d,0x76,0x70,0x20,0x3a,0x20,0x70,0x61,0x63,0x6b,0x6f,0x66,0x66,0x73,0x65,0x74,
    0x28,0x63,0x30,0x29,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x0a,0x73,0x74,0x61,0x74,0x69,
    0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,
    0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,
    0x61,0x74,0x32,0x20,0x75,0x76,0x3b,0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x73,0x74,0x61,
    0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,0x61,0x3b,
    0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x69,0x6e,
    0x5f,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x3b,0x0a,0x0a,0x73,
    0x74,0x72,0x75,0x63,0x74,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,
    0x73,0x5f,0x49,0x6e,0x70,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,
    0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,0x3a,0x20,0x54,0x45,
    0x58,0x43,0x4f,0x4f,0x52,0x44,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,
    0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x75,0x76,0x20,0x3a,0x20,0x54,0x45,0x58,0x43,
    0x4f,0x4f,0x52,0x44,0x31,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,
    0x20,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,0x61,0x20,0x3a,0x20,0x54,0x45,0x58,0x43,
    0x4f,0x4f,0x52,0x44,0x32,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,
    0x74,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,
    0x74,0x70,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,
    0x32,0x20,0x75,0x76,0x20,0x3a,0x20,0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x30,
    0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,
    0x61,0x20,0x3a,0x20,0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x31,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,
    0x69,0x74,0x69,0x6f,0x6e,0x20,0x3a,0x20,0x53,0x56,0x5f,0x50,0x6f,0x73,0x69,0x74,
    0x69,0x6f,0x6e,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,
    0x39,0x20,0x22,0x22,0x0a,0x76,0x6f,0x69,0x64,0x20,0x76,0x65,0x72,0x74,0x5f,0x6d,
    0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x39,
    0x20,0x22,0x22,0x0a,0x20,0x20,0x20,0x20,0x75,0x76,0x20,0x3d,0x20,0x69,0x6e,0x5f,
    0x75,0x76,0x3b,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x32,0x30,0x20,0x22,0x22,0x0a,
    0x20,0x20,0x20,0x20,0x61,0x6c,0x70,0x68,0x61,0x20,0x3d,0x20,0x69,0x6e,0x5f,0x61,
    0x6c,0x70,0x68,0x61,0x3b,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x32,0x31,0x20,0x22,
    0x22,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,
    0x6e,0x20,0x3d,0x20,0x6d,0x75,0x6c,0x28,0x66,0x6c,0x6f,0x61,0x74,0x34,0x28,0x63,
    0x65,0x69,0x6c,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x29,0x2c,0x20,0x30,0x2e,0x30,
    0x66,0x2c,0x20,0x31,0x2e,0x30,0x66,0x29,0x2c,0x20,0x5f,0x33,0x31,0x5f,0x75,0x5f,
    0x6d,0x76,0x70,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,
    0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x6d,0x61,0x69,0x6e,
    0x28,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x49,0x6e,0x70,
    0x75,0x74,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x29,0x0a,
    0x7b,0x0a,0x20,0x20,0x20,0x20,0x69,0x6e,0x5f,0x75,0x76,0x20,0x3d,0x20,0x73,0x74,
    0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x69,0x6e,0x5f,0x75,0x76,0x3b,
    0x0a,0x20,0x20,0x20,0x20,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,0x61,0x20,0x3d,0x20,
    0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x69,0x6e,0x5f,0x61,
    0x6c,0x70,0x68,0x61,0x3b,0x0a,0x20,0x20,0x20,0x20,0x69,0x6e,0x5f,0x70,0x6f,0x73,
    0x20,0x3d,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x69,
    0x6e,0x5f,0x70,0x6f,0x73,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x72,0x74,0x5f,
    0x6d,0x61,0x69,0x6e,0x28,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x53,0x50,0x49,0x52,
    0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,0x73,
    0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x20,0x20,0x20,
    0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x67,0x6c,
    0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x67,0x6c,0x5f,0x50,
    0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x20,0x20,0x20,0x20,0x73,0x74,0x61,
    0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x2e,0x75,0x76,0x20,0x3d,0x20,0x75,
    0x76,0x3b,0x0a,0x20,0x20,0x20,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,
    0x70,0x75,0x74,0x2e,0x61,0x6c,0x70,0x68,0x61,0x20,0x3d,0x20,0x61,0x6c,0x70,0x68,
    0x61,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x73,0x74,
    0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x7d,0x0a,0x00,
};
/*
    Texture2D<float4> u_image : register(t0);
    SamplerState _u_image_sampler : register(s0);
    
    static float2 uv;
    static float alpha;
    static float4 result;
    
    struct SPIRV_Cross_Input
    {
        float2 uv : TEXCOORD0;
        float alpha : TEXCOORD1;
    };
    
    struct SPIRV_Cross_Output
    {
        float4 result : SV_Target0;
    };
    
    #line 15 ""
    void frag_main()
    {
    #line 15 ""
        float4 _20 = u_image.Sample(_u_image_sampler, uv);
        float _29 = _20.w * alpha;
        float4 _44 = _20;
        _44.w = _29;
        if (_29 < 9.9999997473787516355514526367188e-06f)
        {
            discard;
        }
        result = _44;
    }
    
    SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
    {
        uv = stage_input.uv;
        alpha = stage_input.alpha;
        frag_main();
        SPIRV_Cross_Output stage_output;
        stage_output.result = result;
        return stage_output;
    }
*/
static const char default_fs_source_hlsl5[802] = {
    0x54,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x44,0x3c,0x66,0x6c,0x6f,0x61,0x74,0x34,
    0x3e,0x20,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x20,0x3a,0x20,0x72,0x65,0x67,0x69,
    0x73,0x74,0x65,0x72,0x28,0x74,0x30,0x29,0x3b,0x0a,0x53,0x61,0x6d,0x70,0x6c,0x65,
    0x72,0x53,0x74,0x61,0x74,0x65,0x20,0x5f,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x5f,
    0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x20,0x3a,0x20,0x72,0x65,0x67,0x69,0x73,0x74,
    0x65,0x72,0x28,0x73,0x30,0x29,0x3b,0x0a,0x0a,0x73,0x74,0x61,0x74,0x69,0x63,0x20,
    0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x75,0x76,0x3b,0x0a,0x73,0x74,0x61,0x74,0x69,
    0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x73,
    0x74,0x61,0x74,0x69,0x63,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x72,0x65,0x73,
    0x75,0x6c,0x74,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x53,0x50,0x49,
    0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x49,0x6e,0x70,0x75,0x74,0x0a,0x7b,
    0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x75,0x76,0x20,0x3a,
    0x20,0x54,0x45,0x58,0x43,0x4f,0x4f,0x52,0x44,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,0x61,0x20,0x3a,0x20,0x54,0x45,
    0x58,0x43,0x4f,0x4f,0x52,0x44,0x31,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x73,0x74,0x72,
    0x75,0x63,0x74,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,
    0x4f,0x75,0x74,0x70,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,
    0x61,0x74,0x34,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x3a,0x20,0x53,0x56,0x5f,
    0x54,0x61,0x72,0x67,0x65,0x74,0x30,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,
    0x6e,0x65,0x20,0x31,0x35,0x20,0x22,0x22,0x0a,0x76,0x6f,0x69,0x64,0x20,0x66,0x72,
    0x61,0x67,0x5f,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x23,0x6c,0x69,0x6e,
    0x65,0x20,0x31,0x35,0x20,0x22,0x22,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,
    0x74,0x34,0x20,0x5f,0x32,0x30,0x20,0x3d,0x20,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,
    0x2e,0x53,0x61,0x6d,0x70,0x6c,0x65,0x28,0x5f,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,
    0x5f,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x2c,0x20,0x75,0x76,0x29,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x5f,0x32,0x39,0x20,0x3d,0x20,0x5f,
    0x32,0x30,0x2e,0x77,0x20,0x2a,0x20,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x5f,0x34,0x34,0x20,0x3d,0x20,0x5f,
    0x32,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,0x34,0x34,0x2e,0x77,0x20,0x3d,0x20,
    0x5f,0x32,0x39,0x3b,0x0a,0x20,0x20,0x20,0x20,0x69,0x66,0x20,0x28,0x5f,0x32,0x39,
    0x20,0x3c,0x20,0x39,0x2e,0x39,0x39,0x39,0x39,0x39,0x39,0x37,0x34,0x37,0x33,0x37,
    0x38,0x37,0x35,0x31,0x36,0x33,0x35,0x35,0x35,0x31,0x34,0x35,0x32,0x36,0x33,0x36,
    0x37,0x31,0x38,0x38,0x65,0x2d,0x30,0x36,0x66,0x29,0x0a,0x20,0x20,0x20,0x20,0x7b,
    0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x69,0x73,0x63,0x61,0x72,0x64,
    0x3b,0x0a,0x20,0x20,0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x73,0x75,
    0x6c,0x74,0x20,0x3d,0x20,0x5f,0x34,0x34,0x3b,0x0a,0x7d,0x0a,0x0a,0x53,0x50,0x49,
    0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,0x75,0x74,0x70,0x75,0x74,0x20,
    0x6d,0x61,0x69,0x6e,0x28,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,
    0x5f,0x49,0x6e,0x70,0x75,0x74,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,
    0x75,0x74,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x75,0x76,0x20,0x3d,0x20,0x73,
    0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x75,0x76,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x61,0x6c,0x70,0x68,0x61,0x20,0x3d,0x20,0x73,0x74,0x61,0x67,0x65,
    0x5f,0x69,0x6e,0x70,0x75,0x74,0x2e,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x66,0x72,0x61,0x67,0x5f,0x6d,0x61,0x69,0x6e,0x28,0x29,0x3b,0x0a,0x20,
    0x20,0x20,0x20,0x53,0x50,0x49,0x52,0x56,0x5f,0x43,0x72,0x6f,0x73,0x73,0x5f,0x4f,
    0x75,0x74,0x70,0x75,0x74,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,
    0x75,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,
    0x74,0x70,0x75,0x74,0x2e,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x3d,0x20,0x72,0x65,
    0x73,0x75,0x6c,0x74,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,
    0x20,0x73,0x74,0x61,0x67,0x65,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x3b,0x0a,0x7d,
    0x0a,0x00,
};
#endif /* SOKOL_D3D11 */
#if defined(SOKOL_METAL)
/*
    #include <metal_stdlib>
    #include <simd/simd.h>
    
    using namespace metal;
    
    struct vs_params
    {
        float4x4 u_mvp;
    };
    
    struct main0_out
    {
        float2 uv [[user(locn0)]];
        float alpha [[user(locn1)]];
        float4 gl_Position [[position]];
    };
    
    struct main0_in
    {
        float2 in_pos [[attribute(0)]];
        float2 in_uv [[attribute(1)]];
        float in_alpha [[attribute(2)]];
    };
    
    #line 19 ""
    vertex main0_out main0(main0_in in [[stage_in]], constant vs_params& _31 [[buffer(0)]])
    {
        main0_out out = {};
    #line 19 ""
        out.uv = in.in_uv;
    #line 20 ""
        out.alpha = in.in_alpha;
    #line 21 ""
        out.gl_Position = _31.u_mvp * float4(ceil(in.in_pos), 0.0, 1.0);
        return out;
    }
    
*/
static const char default_vs_source_metal_macos[672] = {
    0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x3c,0x6d,0x65,0x74,0x61,0x6c,0x5f,
    0x73,0x74,0x64,0x6c,0x69,0x62,0x3e,0x0a,0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
    0x20,0x3c,0x73,0x69,0x6d,0x64,0x2f,0x73,0x69,0x6d,0x64,0x2e,0x68,0x3e,0x0a,0x0a,
    0x75,0x73,0x69,0x6e,0x67,0x20,0x6e,0x61,0x6d,0x65,0x73,0x70,0x61,0x63,0x65,0x20,
    0x6d,0x65,0x74,0x61,0x6c,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x76,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x34,0x78,0x34,0x20,0x75,0x5f,0x6d,0x76,0x70,0x3b,0x0a,0x7d,
    0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,
    0x6f,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,
    0x20,0x75,0x76,0x20,0x5b,0x5b,0x75,0x73,0x65,0x72,0x28,0x6c,0x6f,0x63,0x6e,0x30,
    0x29,0x5d,0x5d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,
    0x6c,0x70,0x68,0x61,0x20,0x5b,0x5b,0x75,0x73,0x65,0x72,0x28,0x6c,0x6f,0x63,0x6e,
    0x31,0x29,0x5d,0x5d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,
    0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x5b,0x5b,0x70,
    0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x5d,0x5d,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x73,
    0x74,0x72,0x75,0x63,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x69,0x6e,0x0a,0x7b,
    0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x69,0x6e,0x5f,0x70,
    0x6f,0x73,0x20,0x5b,0x5b,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x28,0x30,
    0x29,0x5d,0x5d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,
    0x69,0x6e,0x5f,0x75,0x76,0x20,0x5b,0x5b,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,
    0x65,0x28,0x31,0x29,0x5d,0x5d,0x3b,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,
    0x74,0x20,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,0x61,0x20,0x5b,0x5b,0x61,0x74,0x74,
    0x72,0x69,0x62,0x75,0x74,0x65,0x28,0x32,0x29,0x5d,0x5d,0x3b,0x0a,0x7d,0x3b,0x0a,
    0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x39,0x20,0x22,0x22,0x0a,0x76,0x65,0x72,
    0x74,0x65,0x78,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x6f,0x75,0x74,0x20,0x6d,0x61,
    0x69,0x6e,0x30,0x28,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x69,0x6e,0x20,0x69,0x6e,0x20,
    0x5b,0x5b,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,0x5d,0x5d,0x2c,0x20,0x63,0x6f,
    0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,
    0x26,0x20,0x5f,0x33,0x31,0x20,0x5b,0x5b,0x62,0x75,0x66,0x66,0x65,0x72,0x28,0x30,
    0x29,0x5d,0x5d,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x6d,0x61,0x69,0x6e,0x30,
    0x5f,0x6f,0x75,0x74,0x20,0x6f,0x75,0x74,0x20,0x3d,0x20,0x7b,0x7d,0x3b,0x0a,0x23,
    0x6c,0x69,0x6e,0x65,0x20,0x31,0x39,0x20,0x22,0x22,0x0a,0x20,0x20,0x20,0x20,0x6f,
    0x75,0x74,0x2e,0x75,0x76,0x20,0x3d,0x20,0x69,0x6e,0x2e,0x69,0x6e,0x5f,0x75,0x76,
    0x3b,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x32,0x30,0x20,0x22,0x22,0x0a,0x20,0x20,
    0x20,0x20,0x6f,0x75,0x74,0x2e,0x61,0x6c,0x70,0x68,0x61,0x20,0x3d,0x20,0x69,0x6e,
    0x2e,0x69,0x6e,0x5f,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,0x23,0x6c,0x69,0x6e,0x65,
    0x20,0x32,0x31,0x20,0x22,0x22,0x0a,0x20,0x20,0x20,0x20,0x6f,0x75,0x74,0x2e,0x67,
    0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x5f,0x33,0x31,
    0x2e,0x75,0x5f,0x6d,0x76,0x70,0x20,0x2a,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x28,
    0x63,0x65,0x69,0x6c,0x28,0x69,0x6e,0x2e,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x29,0x2c,
    0x20,0x30,0x2e,0x30,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x6f,0x75,0x74,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,

};
/*
    #include <metal_stdlib>
    #include <simd/simd.h>
    
    using namespace metal;
    
    struct main0_out
    {
        float4 result [[color(0)]];
    };
    
    struct main0_in
    {
        float2 uv [[user(locn0)]];
        float alpha [[user(locn1)]];
    };
    
    #line 15 ""
    fragment main0_out main0(main0_in in [[stage_in]], texture2d<float> u_image [[texture(0)]], sampler u_imageSmplr [[sampler(0)]])
    {
        main0_out out = {};
    #line 15 ""
        float4 _20 = u_image.sample(u_imageSmplr, in.uv);
        float _29 = _20.w * in.alpha;
        float4 _44 = _20;
        _44.w = _29;
        if (_29 < 9.9999997473787516355514526367188e-06)
        {
            discard_fragment();
        }
        out.result = _44;
        return out;
    }
    
*/
static const char default_fs_source_metal_macos[654] = {
    0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x3c,0x6d,0x65,0x74,0x61,0x6c,0x5f,
    0x73,0x74,0x64,0x6c,0x69,0x62,0x3e,0x0a,0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
    0x20,0x3c,0x73,0x69,0x6d,0x64,0x2f,0x73,0x69,0x6d,0x64,0x2e,0x68,0x3e,0x0a,0x0a,
    0x75,0x73,0x69,0x6e,0x67,0x20,0x6e,0x61,0x6d,0x65,0x73,0x70,0x61,0x63,0x65,0x20,
    0x6d,0x65,0x74,0x61,0x6c,0x3b,0x0a,0x0a,0x73,0x74,0x72,0x75,0x63,0x74,0x20,0x6d,
    0x61,0x69,0x6e,0x30,0x5f,0x6f,0x75,0x74,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x34,0x20,0x72,0x65,0x73,0x75,0x6c,0x74,0x20,0x5b,0x5b,0x63,
    0x6f,0x6c,0x6f,0x72,0x28,0x30,0x29,0x5d,0x5d,0x3b,0x0a,0x7d,0x3b,0x0a,0x0a,0x73,
    0x74,0x72,0x75,0x63,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x69,0x6e,0x0a,0x7b,
    0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x32,0x20,0x75,0x76,0x20,0x5b,
    0x5b,0x75,0x73,0x65,0x72,0x28,0x6c,0x6f,0x63,0x6e,0x30,0x29,0x5d,0x5d,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x61,0x6c,0x70,0x68,0x61,0x20,
    0x5b,0x5b,0x75,0x73,0x65,0x72,0x28,0x6c,0x6f,0x63,0x6e,0x31,0x29,0x5d,0x5d,0x3b,
    0x0a,0x7d,0x3b,0x0a,0x0a,0x23,0x6c,0x69,0x6e,0x65,0x20,0x31,0x35,0x20,0x22,0x22,
    0x0a,0x66,0x72,0x61,0x67,0x6d,0x65,0x6e,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,
    0x6f,0x75,0x74,0x20,0x6d,0x61,0x69,0x6e,0x30,0x28,0x6d,0x61,0x69,0x6e,0x30,0x5f,
    0x69,0x6e,0x20,0x69,0x6e,0x20,0x5b,0x5b,0x73,0x74,0x61,0x67,0x65,0x5f,0x69,0x6e,
    0x5d,0x5d,0x2c,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x64,0x3c,0x66,0x6c,
    0x6f,0x61,0x74,0x3e,0x20,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x20,0x5b,0x5b,0x74,
    0x65,0x78,0x74,0x75,0x72,0x65,0x28,0x30,0x29,0x5d,0x5d,0x2c,0x20,0x73,0x61,0x6d,
    0x70,0x6c,0x65,0x72,0x20,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x53,0x6d,0x70,0x6c,
    0x72,0x20,0x5b,0x5b,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x28,0x30,0x29,0x5d,0x5d,
    0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x6d,0x61,0x69,0x6e,0x30,0x5f,0x6f,0x75,
    0x74,0x20,0x6f,0x75,0x74,0x20,0x3d,0x20,0x7b,0x7d,0x3b,0x0a,0x23,0x6c,0x69,0x6e,
    0x65,0x20,0x31,0x35,0x20,0x22,0x22,0x0a,0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,
    0x74,0x34,0x20,0x5f,0x32,0x30,0x20,0x3d,0x20,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,
    0x2e,0x73,0x61,0x6d,0x70,0x6c,0x65,0x28,0x75,0x5f,0x69,0x6d,0x61,0x67,0x65,0x53,
    0x6d,0x70,0x6c,0x72,0x2c,0x20,0x69,0x6e,0x2e,0x75,0x76,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x5f,0x32,0x39,0x20,0x3d,0x20,0x5f,0x32,
    0x30,0x2e,0x77,0x20,0x2a,0x20,0x69,0x6e,0x2e,0x61,0x6c,0x70,0x68,0x61,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x34,0x20,0x5f,0x34,0x34,0x20,0x3d,
    0x20,0x5f,0x32,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,0x34,0x34,0x2e,0x77,0x20,
    0x3d,0x20,0x5f,0x32,0x39,0x3b,0x0a,0x20,0x20,0x20,0x20,0x69,0x66,0x20,0x28,0x5f,
    0x32,0x39,0x20,0x3c,0x20,0x39,0x2e,0x39,0x39,0x39,0x39,0x39,0x39,0x37,0x34,0x37,
    0x33,0x37,0x38,0x37,0x35,0x31,0x36,0x33,0x35,0x35,0x35,0x31,0x34,0x35,0x32,0x36,
    0x33,0x36,0x37,0x31,0x38,0x38,0x65,0x2d,0x30,0x36,0x29,0x0a,0x20,0x20,0x20,0x20,
    0x7b,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x64,0x69,0x73,0x63,0x61,0x72,
    0x64,0x5f,0x66,0x72,0x61,0x67,0x6d,0x65,0x6e,0x74,0x28,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x7d,0x0a,0x20,0x20,0x20,0x20,0x6f,0x75,0x74,0x2e,0x72,0x65,0x73,0x75,
    0x6c,0x74,0x20,0x3d,0x20,0x5f,0x34,0x34,0x3b,0x0a,0x20,0x20,0x20,0x20,0x72,0x65,
    0x74,0x75,0x72,0x6e,0x20,0x6f,0x75,0x74,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
#endif /* SOKOL_METAL */
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before sprite_shader.h"
#endif
static inline const sg_shader_desc* default_sprite_shader_desc(void) {
  #if defined(SOKOL_GLCORE33)
  if (sg_query_backend() == SG_BACKEND_GLCORE33) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "in_pos";
      desc.attrs[1].name = "in_uv";
      desc.attrs[2].name = "in_alpha";
      desc.vs.source = default_vs_source_glsl330;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.vs.uniform_blocks[0].uniforms[0].name = "vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 4;
      desc.fs.source = default_fs_source_glsl330;
      desc.fs.entry = "main";
      desc.fs.images[0].name = "u_image";
      desc.fs.images[0].type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "default_sprite_shader";
    };
    return &desc;
  }
  #endif /* SOKOL_GLCORE33 */
  #if defined(SOKOL_D3D11)
  if (sg_query_backend() == SG_BACKEND_D3D11) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].sem_name = "TEXCOORD";
      desc.attrs[0].sem_index = 0;
      desc.attrs[1].sem_name = "TEXCOORD";
      desc.attrs[1].sem_index = 1;
      desc.attrs[2].sem_name = "TEXCOORD";
      desc.attrs[2].sem_index = 2;
      desc.vs.source = default_vs_source_hlsl5;
      desc.vs.d3d11_target = "vs_5_0";
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.fs.source = default_fs_source_hlsl5;
      desc.fs.d3d11_target = "ps_5_0";
      desc.fs.entry = "main";
      desc.fs.images[0].name = "u_image";
      desc.fs.images[0].type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "default_sprite_shader";
    };
    return &desc;
  }
  #endif /* SOKOL_D3D11 */
  #if defined(SOKOL_METAL)
  if (sg_query_backend() == SG_BACKEND_METAL_MACOS) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.vs.source = default_vs_source_metal_macos;
      desc.vs.entry = "main0";
      desc.vs.uniform_blocks[0].size = 64;
      desc.fs.source = default_fs_source_metal_macos;
      desc.fs.entry = "main0";
      desc.fs.images[0].name = "u_image";
      desc.fs.images[0].type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "default_sprite_shader";
    };
    return &desc;
  }
  #endif /* SOKOL_METAL */
  return 0; /* can't happen */
}