# Libftprintf_base_test

## Getting Started

- This test can serve as base for your own test cases, it includes only sample edge cases tests
- Built for simple visual comparing of outputs
- Convenient for project evaluations as you can add test cases 'on the fly' to the main.c

## Setup

- Copy your library libftprintf.a and your header libftprintf.h to repo folder
- Install valgrind if you wish to check your memory errors

## Usage

- Disable flags for compiler if it complaints about NULL passing with %s

- `make main` to compile mandatory part test
- `./a.out` to run test
- First output is from your ft_printf
- Second output is from original printf
- Return values of both functions

- If you work on Linux original function outputs `(nul)` by passing NULL with `%p` specificator
- School tests are done on Mac's, their output to above will be `0x0`
- In order to pass tests output `0x0` instead of `(nul)` in that case

## Built with

- C

## Authors

👤 **Igors Oleinikovs**

- GitHub: [Igors78](https://github.com/Igors78)
- Twitter: [@oleinikovs](https://twitter.com/oleinikovs)
- LinkedIn: [Oleinikovs Igors](https://www.linkedin.com/in/igors-oleinikovs-17a10958/)

👤 **Mert Barut**

- GitHub: [mertbarut](https://github.com/mertbarut)

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!

## Show your support

Give a ⭐️ if you like this project!

## Acknowledgments

- 42 Wolfsburg

## 📝 License

This project is [UNLicense](./LICENSE) licensed.
