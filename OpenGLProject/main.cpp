#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	//denne initsialiserer GLFW
	glfwInit();

	//forteller GLFW hvilken versjon av OpenGL
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//forteller GLFW hva slags core profil jeg bruker
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//her lager jeg et object av GLFWwindow som er 480 x480 pixler 
	GLFWwindow* window = glfwCreateWindow(480, 480, "OpenGL", NULL, NULL);
	//introduserer window in i contexten
	glfwMakeContextCurrent(window);
	//laster in GLAD så den configurer OpenGL
	gladLoadGL();

	glViewport(0,0,480,480);

	glClearColor(0.07f, 0.13f, 0.17f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);
		 
	while(!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();

	return 0;
}