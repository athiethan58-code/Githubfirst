<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Modern Login Page</title>
    <link rel="stylesheet" href="style.css">
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;500;600&display=swap" rel="stylesheet">
</head>
<body>
    <div class="login-container">
        <div class="login-card">
            <h2>Welcome Back</h2>
            <p class="subtitle">Please enter your details to sign in</p>
            
            <form action="#" method="POST">
                <div class="input-group">
                    <label for="email">Email Address</label>
                    <input type="email" id="email" required placeholder="Enter your email">
                </div>
                
                <div class="input-group">
                    <label for="password">Password</label>
                    <input type="password" id="password" required placeholder="••••••••">
                </div>
                
                <div class="form-actions">
                    <label class="remember-me">
                        <input type="checkbox"> Remember me
                    </label>
                    <a href="#" class="forgot-password">Forgot password?</a>
                </div>
                
                <button type="submit" class="login-btn">Sign In</button>
            </form>
            
            <div class="login-footer">
                <p>Don't have an account? <a href="#">Create one</a></p>
            </div>
        </div>
    </div>
</body>
</html>