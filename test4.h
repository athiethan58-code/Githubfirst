/* Reset basic styles */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Poppins', sans-serif;
}

body {
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    min-height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
}

/* Centered Layout Card */
.login-container {
    width: 100%;
    max-width: 420px;
    padding: 20px;
}

.login-card {
    background: #ffffff;
    padding: 40px;
    border-radius: 16px;
    box-shadow: 0 10px 25px rgba(0, 0, 0, 0.15);
}

.login-card h2 {
    color: #333333;
    font-size: 28px;
    font-weight: 600;
    margin-bottom: 8px;
}

.subtitle {
    color: #777777;
    font-size: 14px;
    margin-bottom: 30px;
}

/* Input Fields Styling */
.input-group {
    margin-bottom: 20px;
    text-align: left;
}

.input-group label {
    display: block;
    color: #4a5568;
    font-size: 13px;
    font-weight: 500;
    margin-bottom: 8px;
}

.input-group input {
    width: 100%;
    padding: 12px 16px;
    border: 1px solid #e2e8f0;
    border-radius: 8px;
    font-size: 14px;
    color: #333333;
    transition: all 0.3s ease;
    outline: none;
}

/* Input focus glow effect */
.input-group input:focus {
    border-color: #667eea;
    box-shadow: 0 0 0 3px rgba(102, 126, 234, 0.15);
}

/* Checkbox & Forgot Password Links */
.form-actions {
    display: flex;
    justify-content: space-between;
    align-items: center;
    font-size: 13px;
    margin-bottom: 24px;
}

.remember-me {
    color: #4a5568;
    cursor: pointer;
    display: flex;
    align-items: center;
    gap: 6px;
}

.forgot-password, .login-footer a {
    color: #667eea;
    text-decoration: none;
    font-weight: 500;
}

.forgot-password:hover, .login-footer a:hover {
    text-decoration: underline;
}

/* Action Button */
.login-btn {
    width: 100%;
    padding: 14px;
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    border: none;
    border-radius: 8px;
    color: white;
    font-size: 16px;
    font-weight: 500;
    cursor: pointer;
    transition: opacity 0.2s ease;
}

.login-btn:hover {
    opacity: 0.9;
}

/* Footer text */
.login-footer {
    margin-top: 24px;
    text-align: center;
    font-size: 13px;
    color: #718096;
}