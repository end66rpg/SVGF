#ifndef TEXTURE2D_H
#define TEXTURE2D_H

#include "Texture.h"

#include "GL/glew.h"

namespace CS123 { namespace GL {

class Texture2D : public Texture {
public:
  Texture2D(const GLvoid *data, int width, int height, GLint internalFormat,
            GLenum format, GLenum type);

  static Texture2D RGBAFloatTex(const GLvoid *data, int width, int height);
  static Texture2D UnsignedByteTex(const GLvoid *data, int width, int height);

  virtual void bind() const override;
  virtual void unbind() const override;
};

}}

#endif // TEXTURE2D_H
