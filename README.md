# Noodle

Noodle is an open-source texture designer, providing a node-based interface for creating textures.
The project is designed to be cross-platform and allows for extensibility through custom nodes written in various languages like Python.


## Features

## Getting Started

### Prerequisites

- **C++ 20 Compiler**: Ensure you have a C++ 20 compatible compiler.

| Compiler | Version |
| -------- | ------- |
| MSVC     | xxx     |
| GCC      | xxx     |
| Clang    | xxx     |

- **CMake**: Used for building the backend.
- **Node.js and npm**: For building and running the frontend.

### Building the Backend

1. Clone the repository:
    ```sh
    git clone https://github.com/brianbatista93/noodle.git
    cd noodle
    ```

2. Inside the repository folder create a build directory and run CMake:
    ```sh
    mkdir build
    cd build
    cmake ..
    make
    ```

### Running the Frontend

1. Navigate to the frontend directory:
    ```sh
    cd src/frontend
    ```

2. Install dependencies:
    ```sh
    npm install
    ```

3. Start the development server:
    ```sh
    npm run serve
    ```

## Contributing

Contributions are welcome! Please read our [Contributing Guidelines](docs/CONTRIBUTING.md) for more information on how to get started.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Documentation

For detailed documentation and examples, visit the [docs](docs/) directory.

## Contact

If you have any questions or suggestions, feel free to open an issue or contact us at brianbatista93@gmail.com.

