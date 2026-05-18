#ifndef OPENGLTEST_EXAMPLE2_H
#define OPENGLTEST_EXAMPLE2_H

class GLFWwindow;

class Example2 {
public:
    static void createTriangle(int ScreenWidth, int ScreenHeight);

private:
    static void initShader(GLFWwindow*& window, unsigned int& shaderProgram, int ScreenWidth, int ScreenHeight
        , const char* vertexShaderSource, const char* fragmentShaderSource);

    static void setShaderAttributes(unsigned int& shaderProgram, unsigned int& VAO, unsigned int& VBO);

    static void renderLoop(GLFWwindow* window, unsigned int& shaderProgram, unsigned int& VAO);
};


#endif //OPENGLTEST_EXAMPLE2_H