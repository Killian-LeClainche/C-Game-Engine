#pragma once

#include "stdafx.h"
#include "Texture.h"
#include "Color.h"
#include "TexCoord.h"

namespace Engine
{
	void glBlend(int src = GL_SRC_ALPHA, int output = GL_ONE_MINUS_SRC_ALPHA);
	void glClearBuffers(int bufferClear = GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
	void glDefaults();

	void glSetup2d(glm::vec4 renderArea, GLdouble width, GLdouble height, GLdouble zScaleMax);
	void glSetup3d(glm::vec4 renderArea, float windowRatio, float fovy, float zNear, float zFar);

	void glVertex(double x, double y, double z, Color color);
	void glVertex(double x, double y, double z, double r, double g, double b, double a = 1);
	void glVertex(double x, double y, double z, double u, double v);
	void glVertex(double x, double y, double z, double u, double v, Color color);
	void glVertex(double x, double y, double z, double u, double v, double r, double g, double b, double a = 1);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture, Color color);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture, double r, double g, double b, double a = 1);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture, int animationID);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture, int animationID, Color color);
	void glVertex(double x, double y, double z, double u, double v, TexCoord texture, int animationID, double r, double g, double b, double a = 1);

	void glColor(double r, double g, double b, double a = 1);
	void glColor(Color color);
	Color getColor();
	float getRed();
	float getGreen();
	float getBlue();
	float getAlpha();
}