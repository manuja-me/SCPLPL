use std::io;

fn main() {
    println!("to fahrenheit(f) or celsius(c): ");
    let method = get_input().trim().to_lowercase();

    if method == "c" {
        println!("Enter value in Fahrenheit: ");
        let fahrenheit: f64 = get_input()
            .trim()
            .parse()
            .expect("please enter a valid number!");
        let celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        println!("The temp in Celsius is : {celsius:.2}");
    } else if method == "f" {
        println!("Enter value in Celsius: ");
        let celsius: f64 = get_input()
            .trim()
            .parse()
            .expect("please enter a valid number");
        let fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        println!("The temp in Celsius is : {fahrenheit:.2}");
    } else {
        println!(" {method} is not a valid measurement!");
    }
}

fn get_input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read a value!");
    input
}
