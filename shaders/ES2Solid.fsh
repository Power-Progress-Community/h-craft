precision mediump float;

uniform sampler2D uTextureUnit0;

varying vec2 vTextureCoord0;
varying vec4 vVertexColor;
varying vec4 vSpecularColor;

void main()
{
	gl_FragColor = vVertexColor * texture2D(uTextureUnit0, vTextureCoord0) + vSpecularColor;
}
