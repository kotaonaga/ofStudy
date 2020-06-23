#version 150

#define R_LUMINANCE 0.298912
#define G_LUMINANCE 0.586611
#define B_LUMINANCE 0.114478

varying vec2 vUv;
uniform sampler2D tDiffuse;
const vec3 monochromeScale = vec3(R_LUMINANCE, G_LUMINANCE, B_LUMINANCE);

void main() {
//  vec4 color = texture2D(tDiffuse, vUv);
//  float grayColor = dot(color.rgb, monochromeScale);
//  color = vec4(vec3(grayColor), 1.0);
//  gl_FragColor = vec4(color);
    
    vec3 color = vec3(1.0, 0.0, 0.3);
    gl_FragColor = vec4(color, 1.0);
}
