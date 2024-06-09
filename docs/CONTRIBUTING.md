# Contributing to Noodle

Thank you for considering contributing to Noodle! We welcome contributions from everyone. By contributing, you help make Noodle better for everyone.

## How to Contribute

### Reporting Bugs

If you find a bug in the project, please open an issue on our [GitHub Issues](https://github.com/brianbatista93/noodle/issues) page. Before creating a new issue, please check if the bug has already been reported.

**When reporting a bug, please include:**
- A clear and descriptive title.
- Steps to reproduce the issue.
- Expected and actual results.
- Any relevant screenshots or code snippets.
- The operating system and version you are using.

### Suggesting Enhancements

We welcome suggestions for new features or improvements. Please open an issue on our [GitHub Issues](https://github.com/brianbatista93/noodle/issues) page and label it as a feature request.

**When suggesting an enhancement, please include:**
- A clear and descriptive title.
- A detailed description of the enhancement.
- Any relevant use cases or benefits.
- If possible, examples or mockups of the enhancement.

### Submitting Pull Requests

1. **Fork the Repository**: Fork the project repository on GitHub.
2. **Clone Your Fork**: Clone your fork to your local machine.
    ```sh
    git clone https://github.com/your-username/noodle.git
    cd noodle
    ```
3. **Create a Branch**: Create a new branch for your work.
    ```sh
    git checkout -b feature/your-feature-name
    ```
4. **Make Changes**: Make your changes to the codebase.
5. **Commit Changes**: Commit your changes with a clear and descriptive commit message.
    ```sh
    git commit -m "Add feature: description of the feature"
    ```
6. **Push Changes**: Push your changes to your fork.
    ```sh
    git push origin feature/your-feature-name
    ```
7. **Open a Pull Request**: Open a pull request to the main repository. Provide a clear and descriptive title and description for your pull request.

**When submitting a pull request, please ensure:**
- Your code follows the project's coding standards.
- You have added tests to cover your changes.
- All tests pass.
- Your changes do not introduce new warnings or errors.

### Code Style

Please adhere to the following coding standards:
- **C++**: Follow the [Blender Style Guide](https://developer.blender.org/docs/handbook/guidelines/c_cpp/).
- **JavaScript**: Follow the Airbnb JavaScript Style Guide.
- **Python**: Follow PEP 8.

### Running Tests

Before submitting your changes, ensure that all tests pass. You can run tests using the following commands:

**Backend Tests:**
```sh
cd src/backend
mkdir build
cd build
cmake ..
make
make test
```

**Backend Tests:**
```sh
cd src/frontend
npm install
npm test
```

### Documentation
If you are adding new features or changing existing functionality, please update the documentation accordingly. Documentation is located in the docs directory.

### Code of Conduct
Please note that this project is governed by a [Code of Conduct](docs/CODE_OF_CONDUCT.md). By participating, you agree to uphold this code.

### Contact
If you have any questions or need further assistance, feel free to reach out by opening an issue or contacting us at brianbatista93@gmail.com.