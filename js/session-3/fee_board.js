
const instituteName = "Bright Future Tuition";

let studentName = "Rahul";
let monthlyFee = 1800;
let batchName = "Web Development";
let paid = true;

console.log("Institute Name: " + instituteName);
console.log("Student Name: " + studentName);
console.log("Monthly Fee: " + monthlyFee);
console.log("Batch Name: " + batchName);
console.log("Paid Status: " + paid);

{
    var batchCode = "M9";
    let seatNo = 12;
}

console.log("Batch Code: " + batchCode);
console.log("Seat No Type: " + typeof seatNo);





let feeB = monthlyFee;

feeB = 2500;

console.log("Primitive copy - monthlyFee: " + monthlyFee);
console.log("Primitive copy - feeB: " + feeB);

const student1 = {
    name: "Aarav",
    fee: 1800
};

const student2 = student1;

student2.fee = 2200;

console.log("Reference copy - student1.fee: " + student1.fee);
console.log("Reference copy - student2.fee: " + student2.fee);

var feeStatus = 1800;

console.log("feestatus"+feeStatus);
console.log("feeStatus"+typeof feeStatus);


var feeStatus = "1800";
console.log("feestatus"+feeStatus);
console.log("feeStatus"+typeof feeStatus);

var feeStatus = false;
console.log("feestatus"+feeStatus);
console.log("feeStatus"+typeof feeStatus);


var months = 6
let totalFee= monthlyFee * months;

let siblingDiscount = totalFee * 0.10

let lateDays = 4;
let lateFee = lateDays * 50;

let netPayable = totalFee - siblingDiscount + lateFee;

console.log("Total Fee: " + totalFee);
console.log("Sibling Discount: " + siblingDiscount);
console.log("Late Fee: " + lateFee);
console.log("Net Payable: " + netPayable);


let attendancePercent = 80;
let feePaid = true;
let hasPermission = false;

let canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission;

console.log("Student 1 - Can Write Test: " + canWriteTest);

attendancePercent = 70;
feePaid = false;
hasPermission = true;

canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission;

console.log("Student 2 - Can Write Test: " + canWriteTest);

attendancePercent = 60;
feePaid = true;
hasPermission = false;

canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission;

console.log("Student 3 - Can Write Test: " + canWriteTest);

