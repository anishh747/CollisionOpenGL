# **Simulation of Elastic and Inelastic Collisions Using OpenGL"**

---

## **Objective**:

- **Visualize 2D or 3D elastic and inelastic collisions of rigid bodies, demonstrating the principles of momentum and energy conservation in C++ using OpenGL**.
- **Provide an interactive educational tool that helps students' understanding of collision dynamics and grasp key concepts in physics through visual learning**.

## **Library and Language Used**:

- **Programming Language**: C++
- **Graphics Library**: OpenGL (with libraries like GLFW for window management)
- **Development Environment**: Code::Blocks, & CLI with `g++`.

## **How to Build and Run the Project**:

### **Using CMake**:

1. **Create a build directory**:

   - Navigate to the project directory:
     ```bash
     cd path/to/project-directory
     ```
   - Create a build directory:
     ```bash
     mkdir build
     cd build
     ```

2. **Configure the project with CMake**:

   - Run CMake to generate the necessary build files:
     ```bash
     cmake ..
     ```

3. **Build and Run the project**:
   - Use CMake to build and run the project:
     ```bash
     cmake --build .
     ./CollisionOpenGL
     ```
   - Alternatively:
     ```bash
     cmake --build . --target run
     ```

## **Dependencies Installation**:

- **GLFW**:
  - For **GLFW**, download and install it from [GLFW's official site](https://www.glfw.org/).

---
