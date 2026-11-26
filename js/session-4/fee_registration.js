
let fees = [1800, 2200, 1500, 2500, 1800, 3000, 1200, 2000];

let total = 0;

console.log("Monthly Fee Register");

for (let i = 0; i < fees.length; i++) {
    console.log("Student " + (i + 1) + ": ₹" + fees[i]);
    total = total + fees[i];
}

console.log("Total Fees: ₹" + total);


console.log("Yearly Fee Instalments");

let due = 16000;

while (due > 0) {
    due = Math.max(due - 3000, 0);
    console.log("Remaining Due: ₹" + due);
}


console.log("Payment Retry - Payment Succeeds on Attempt 3");

let attempt = 1;
let successAttempt = 3;
let paymentStatus = "failed";

do {
    if (attempt === successAttempt) {
        paymentStatus = "paid";
        console.log("Attempt " + attempt + ": paid");
    } else {
        console.log("Attempt " + attempt + ": failed");
    }

    attempt++;

} while (paymentStatus !== "paid" && attempt <= 5);


console.log("Payment Retry - Payment Succeeds on Attempt 7");

attempt = 1;
successAttempt = 7;
paymentStatus = "failed";

do {
    if (attempt === successAttempt) {
        paymentStatus = "paid";
        console.log("Attempt " + attempt + ": paid");
    } else {
        console.log("Attempt " + attempt + ": failed");
    }

    attempt++;

} while (paymentStatus !== "paid" && attempt <= 5);


console.log("Fees Using for...of");

for (let fee of fees) {
    if (fee < 1500) {
        continue;
    }

    console.log("Fee: ₹" + fee);
}


console.log("Fees Using forEach");

fees.forEach(function(fee) {
    if (fee < 1500) {
        return;
    }

    console.log("Fee: ₹" + fee);
});
