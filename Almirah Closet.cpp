// Html File 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Almirah Closet</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.2/css/all.min.css">

</head>
<body>
     <!-- Nav Section  --> 
      <div class="mainNav">

    <div class="navbar">
        <nav>
            <div class="logo">
                <h3>Logo</h3>
            </div>
            <div class="anchors">
                <a href="#">Account</a>
                <a href="#">Search</a>
            </div>
        </nav>
    </div>
    <div class="lists">
        <nav>
            <ul>
                <li><a href="#">Home</a></li>
                <li><a href="#">About</a></li>
                <li><a href="#">Contact</a></li>
                <li><a href="#">Accessories</a></li>
                <li><a href="#">Testimonial</a></li>
            </ul>
        </nav>
    </div>
</div>

    <!-- ---------------- -->
     <div class="centerPart">
        <img src="https://wardrobefashion.com/cdn/shop/files/Sale_Banner_July_Desktop_V2_1800x.png?v=1721458767" alt="">
     </div>

     <!-- How it works -->

     <div id="about">
        <div class="container">
                <h1>How it Works</h1>

                <div class="grid">
                    <div id="box"> Lorem ipsum dolor sit amet consectetur adipisicing elit. At consequuntur recusandae, eos aliquam provident autem consectetur ipsam quas sit harum! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Officiis quidem non, iure animi provident temporibus assumenda pariatur voluptatibus, voluptates odit, eligendi adipisci praesentium dolores inventore debitis consequuntur possimus accusantium omnis.
                        <br>
                        <a href="#"> Click me </a>
                     
                    </div>
                    <div id="box"> Lorem ipsum dolor sit amet consectetur adipisicing elit. At consequuntur recusandae, eos aliquam provident autem consectetur ipsam quas sit harum! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Officiis quidem non, iure animi provident temporibus assumenda pariatur voluptatibus, voluptates odit, eligendi adipisci praesentium dolores inventore debitis consequuntur possimus accusantium omnis.
                        <br>

                        <a href="#"> Click me </a>

                    </div>
                    <div id="box">  Lorem ipsum dolor sit amet consectetur adipisicing elit. At consequuntur recusandae, eos aliquam provident autem consectetur ipsam quas sit harum! Lorem ipsum dolor, sit amet consectetur adipisicing elit. Officiis quidem non, iure animi provident temporibus assumenda pariatur voluptatibus, voluptates odit, eligendi adipisci praesentium dolores inventore debitis consequuntur possimus accusantium omnis.
                        <br>

                        <a href="#"> Click me </a>

                    </div>
                </div>
        </div>
     </div>

     <!-- Contact Section -->
     <div id="contact">
        <div class="container">
           <h1>Contact Us </h1>
        </div>

        <div id="lists2">
            <div class="row1">
                <ul>
                    <li>Contact Us </li>
                    <br>

                    <li>FAQs </li>
                    <li>Return Policy </li>
                    <li>Return Form</li>
                    <li>Delivery </li>

                </ul>
            </div>
            <div class="row1">
                <ul>
                    <li>LEGAL</li>
                    <br>
                    <li>Terms & Conditions</li>
                    <li> Privacy Policy   </li>
                    <li>Cookies Policy</li>

                </ul>
            </div>
            <div class="row1">
                <ul>
                    <li>BE THE FIRST TO KNOW</li>
                    <br>
                    <li>Subscribe now and be the first to know about new collections, seasonal exclusives and exciting projects.</li>

                    <li> <input type="text" name="" id="" placeholder="Enter your email address"></li>
                    <li><button>SUBSCRIBE</button></li>
                </ul>
            </div>
            <div class="row1">
                <ul>
                <li>Follow us</li>
                <br>
                <li> 
                    <a href="https://www.instagram.com/its_jatin04/"><i class="fab fa-instagram"></i></a>
                    <a href="https://x.com/JatinKumar2485"><i class="fab fa-twitter"></i></a>
                </li>
            </ul>
            </div>

     </div>
</body>
</html>

  // CSS
  * {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
    font-family: sans-serif;
}


.mainNav {

    width: 100%;
    height: auto;
    position: fixed;
    background-color: white;
    font-weight: bold;
}

.navbar nav {
    /* background-color: rgb(154, 35, 35); */
    height: 30px;
    display: flex;
    align-items: center;
    justify-content: space-between;
    padding: 0 20px;
}

.anchors a {
    text-decoration: none;
    font-size: 18px;
    color: black;
    margin-left: 50px;
    cursor: pointer;
}

.logo {
    cursor: pointer;
}

.lists nav {
    /* background-color: rgb(154, 35, 35); */
    height: 30px;
}

.lists nav ul {
    list-style: none;
    display: flex;
    align-items: center;
    justify-content: center;
}

.lists nav ul li a {
    padding: 2px 10px;
    /* margin-bottom: 20px; */
    text-decoration: none;
    color: black;
    position: relative;
    transition: 0.5s;
}

.lists nav ul li a::after {
    content: '';
    width: 0;
    height: 3px;
    background-color: black;
    position: absolute;
    left: 0;
    bottom: -6px;
    transition: 0.5s;
}

.lists nav ul li a:hover::after {
    width: 100%;
}

#about {
    padding: 80px 0;
    color: black;

}

.container {
    padding: 10px 10%;
}

/* Working  */
#about .container h1 {
    font-size: 50px;
    margin-top: 50px;
}

.grid {
    /* display: flex;/ */
    /* grid-template-columns: repeat(auto-fit, minmax(250px, 1fr)); */
    gap: 40px;
    margin-top: 50px;
    display: flex;
    color: white;
  
}

.grid div{
    background: #262626;
    height: 50%;
    padding: 40px;
    font-size: 13px;
    font-weight: 300;
    border-radius: 10px;
    line-height: 17px;
    transition: background 0.5s, transform 0.5s; 
    text-align:center ;
}
#box a{
    display: inline-block;
    margin-top: 10px;
    text-decoration: none;
    color: white;
    border: 1px solid white;
    padding: 5px;
}

/* Contact Section  */
#contact .container h1{
    font-size: 50px;
    margin-top: 100px;

}


#lists2{
    height: 70vh;
    
    /* background-color: black; */
    display: flex;
    gap: 40px;
    justify-content: center;
    align-items: center;
    color: white;
}
.row1{
    height: 50vh;
    width: 40vh;
    background-color: rgb(0, 0, 0);
    padding: 10px 20px;
}
.row1 ul li {
    list-style: none;
    margin-top: 20px;
    font-weight: lighter;
}
.row1 ul li input {
    padding: 10px;
    width: 100%;
    border: none;
    outline: none;


}
.row1 ul li button{
    padding: 10px;
    letter-spacing: 3px;
    border-radius: 1px;
    border: none;
}
.row1 ul li a i {
    color:  white;
    padding: 0 20px;
}
