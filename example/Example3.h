#ifndef OPENGLTEST_EXAMPLE3_H
#define OPENGLTEST_EXAMPLE3_H
#include <string>

class Shader;
class GLFWwindow;

class Example3 {
public:
    static void createTexture(int ScreenWidth, int ScreenHeight);

private:
    static void initShader(GLFWwindow*& window, int ScreenWidth, int ScreenHeight);

    static void createShader(unsigned int& VAO, unsigned int& VBO, unsigned int& EBO);

    static void createTexture(unsigned int& texture, const std::string& path);

    static void renderLoop(GLFWwindow* window, unsigned int VAO
        , Shader ourShader, unsigned int texture1, unsigned int texture2);
};


#endif //OPENGLTEST_EXAMPLE3_H