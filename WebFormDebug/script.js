// MindHive 2026 - Debug Sprint

document.getElementById("submitBtn").addEventListener("click", validateForm);

function validateForm(e) {

    let name = document.getElementByID("name").value;
    let email = document.getElementById("email").value;
    let age = document.getElementById("age").value;

    if(name = "" || email == "" || age == "") {
        document.getElementById("message").innerText = "All fields are required!";
    }
    else if(age < 18) {
        document.getElementById("message").innerText = "Age must be 18 or above";
    }
    else {
        document.getElementById("message").innerText = "Registration Successful!";
    }
}
