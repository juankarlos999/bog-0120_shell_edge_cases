# Simple Shell, Edge Cases

Here you can test simple shell functionalities and receive a feedback about it :)

Here is an example on how to check your shell, clone this repo and add follow below steps.

## Configuration

Open the file `config` and update the variable `SHELL` with your shell.


## Run

Usage `./check_simple_shell.bash`


## Content

| CASES | DETAILS | EXAMPLE |
| ------ | ------ | ------ |
| Absolute paths | [01_simple_shell_0.1](./01_simple_shell_0.1) | `/bin/ls` |
| Random | [02_simple_shell_0.1.1](./02_simple_shell_0.1.1) | `.` |
| Arguments | [03_simple_shell_0.2](./03_simple_shell_0.2) | `/bin/ls -l /tmp` 
| Paths | [05_path_cases_0.3](./05_path_cases_0.3) | `ls` |
| Error | [06_error_cases_0.4](./06_error_cases_0.4) | `./handled_error` |
| Advanced | [07_advanced_cases_0.5](./07_advanced_cases_0.5) | `/bin/ls -l ##a` |