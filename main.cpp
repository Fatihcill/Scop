#include <GLFW/glfw3.h>

int main()
{
	if (!glfwInit())
	{
		// Initialization failed
		return -1;
	}

	GLFWwindow *window = glfwCreateWindow(640, 480, "My Window", NULL, NULL);
	if (!window)
	{
		// Window or OpenGL context creation failed
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window))
	{
		// Render here

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}