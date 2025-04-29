@import url('https://fonts.googleapis.com/css2?family=Poppins:wght@400;600;700&display=swap');

body {
  font-family: 'Poppins', sans-serif;
  color: #002b5c;
  /* background image from static/images folder */
  background-image: url("../images/background.jpg");
  background-repeat: no-repeat;
  background-position: center center;
  background-attachment: fixed;
  background-size: cover;
  margin: 0;
  padding: 0;
}

/* subtle pattern overlay for medical icons */
body::before {
  /* removed overlay for direct image background */
  display: none;
}

.container {
  width: 80%;
  max-width: 1000px;
  margin: 80px auto;
  padding: 40px 30px;
  border-radius: 16px;
  box-shadow: 0 10px 20px rgba(0,0,0,0.1);
  position: relative;
  z-index: 1;
}

h1, h2 {
  color: #222;
  text-shadow: 1px 1px 2px rgba(255, 255, 255, 0.6);
}

h2 {
  font-family: 'Poppins', sans-serif;
  font-weight: 600;
  color: #002b5c;
  margin-bottom: 10px;
}

form {
  display: flex;
  flex-direction: column;
}

.disease-section {
  margin-top: 20px;
}

form input,
.sidebar select {
  background: #f9f9f9;
  border: 1px solid #cccccc;
  border-radius: 8px;
  padding: 12px 15px;
  margin-bottom: 15px;
  width: 100%;
  font-family: 'Poppins', sans-serif;
  color: #333333;
}

button {
  background: #1a73e8;
  color: #fff;
  border-radius: 8px;
  padding: 12px 20px;
  font-family: 'Poppins', sans-serif;
  font-size: 1rem;
  width: 100%;
  border: none;
  cursor: pointer;
}

button:hover {
  background: #155ab6;
}

.result {
  margin-top: 20px;
  padding: 15px;
  background: #ecf0f1;
  border-radius: 4px;
  font-size: 1.1rem;
  text-align: center;
}

/* Layout for sidebar and form content */
.main-content {
  display: flex;
  align-items: flex-start;
}

.sidebar {
  flex: 0 0 200px;
  margin-right: 20px;
  margin-bottom: 0;
  position: sticky;
  top: 100px;
  align-self: flex-start;
}

.sidebar label,
.sidebar select {
  display: block;
  width: 100%;
  margin-bottom: 10px;
  font-family: 'Poppins', sans-serif;
  font-weight: 400;
  color: #333333;
}

.form-content {
  width: 100%;
  max-width: 600px; /* limit form width for better readability */
}

/* Responsive: stack sidebar above form on small screens */
@media (max-width: 768px) {
  .main-content {
    flex-direction: column;
  }
  .sidebar {
    margin-right: 0;
    margin-bottom: 20px;
    width: 100%;
    position: relative;
    top: auto;
  }
}

.form-content input {
  background: rgba(255, 255, 255, 0.8);
  font-family: 'Poppins', sans-serif;
  color: #555555;
  border: 1px solid #cccccc;
}
.form-content input::placeholder {
  color: rgba(0, 0, 0, 0.5);
  /* placeholder inherits Poppins */
}

/* Style the main heading with Poppins and a 3D effect */
.main-heading {
  font-family: 'Poppins', sans-serif;
  text-align: center;
  font-size: 2.5rem;
  font-weight: 700;
  text-transform: uppercase;
  color: #002b5c;
  margin-bottom: 20px;
  padding: 15px 0;
  /* heading background image */
  background-image: url("../images/background.jpg");
  background-repeat: no-repeat;
  background-position: center center;
  background-size: cover;
  position: sticky;
  top: 0;
  z-index: 100;
  text-shadow:
    2px 2px 0 rgba(0, 0, 0, 0.2),
    4px 4px 0 rgba(0, 0, 0, 0.1);
}

/* Add input-group wrapper styling for icons and depth */
.input-group {
  position: relative;
  margin: 8px 0;
}

.input-icon {
  position: absolute;
  left: 20px;
  top: 50%;
  transform: translateY(-50%);
  font-size: 1rem;
  color: #555555;
}

.input-group input {
  padding-left: 45px;
  box-shadow: 0 2px 4px rgba(0,0,0,0.1);
  background: transparent;
  position: relative;
  z-index: 2;
}

/* Sidebar disease list styling */
.disease-list {
  list-style: none;
  padding: 0;
  margin-top: 10px;
}
.disease-list li {
  padding: 10px 15px;
  margin-bottom: 10px;
  background: #f9f9f9;
  border-radius: 8px;
  cursor: pointer;
  font-family: 'Poppins', sans-serif;
  color: #333333;
  transition: background 0.2s, color 0.2s;
}
.disease-list li.active,
.disease-list li:hover {
  background: #1a73e8;
  color: #fff;
}

/* Ensure hidden input doesn't display */
#disease {
  display: none;
}

/* Floating label always visible and centered in input */
.input-group .floating-label {
  position: absolute;
  top: 50%;
  left: 0;
  right: 0;
  transform: translateY(-50%);
  text-align: center;
  opacity: 0.75;
  pointer-events: none;
  z-index: 3; /* sit above input text */
} 
