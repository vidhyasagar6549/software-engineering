const registrationForm = document.getElementById('registrationForm');
const successMessage = document.getElementById('successMessage');
const mobileInput = document.getElementById('mobile');
const dobInput = document.getElementById('dob');

dobInput.max = new Date().toISOString().split('T')[0];

mobileInput.addEventListener('input', () => {
    mobileInput.value = mobileInput.value.replace(/\D/g, '').slice(0, 10);
});

registrationForm.addEventListener('submit', (event) => {
    event.preventDefault();

    if (!registrationForm.checkValidity()) {
        registrationForm.reportValidity();
        return;
    }

    const student = {
        fullName: document.getElementById('fullName').value.trim(),
        email: document.getElementById('email').value.trim(),
        mobile: mobileInput.value,
        dob: dobInput.value,
        gender: document.getElementById('gender').value,
        course: document.getElementById('course').value,
        address: document.getElementById('address').value.trim()
    };

    successMessage.textContent = `Thank you, ${student.fullName}! Your registration form has been submitted successfully.`;
    successMessage.classList.add('show');
    registrationForm.reset();
    dobInput.max = new Date().toISOString().split('T')[0];
});
