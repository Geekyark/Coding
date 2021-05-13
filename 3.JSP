

<%@page import="assignmet4.Sayan.background"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
          <%
              String bgColor = "";  
        if ( Math.random() < 0.3 ) {  
        bgColor = "GREEN";  
        }  
        else if ( (Math.random() > 0.3) && (Math.random() < 0.5) ){  
        bgColor = "BLUE";  
        }  
        else if ( (Math.random() > 0.5) && (Math.random() < 0.8) ){  
        bgColor = "RED";  
        }
        System.out.println(bgColor);
          %>
          
          <body BGCOLOR="<%= bgColor %>">
              
              <div style="position: absolute; margin: auto; top: 0; right: 0; bottom: 0; left: 0;  width: 500px; height: 400px; padding: 20px; background-color:#fff; border: solid 2px #fff; box-shadow: inset 60px 0 120px #f0f, inset -60px 0 120px #0ff;">
                  <div style="display: flex; justify-content: center; align-content: center; font-size: 40px;">
                      Kindly Refresh this page to observe the effect..
                  </div>
              </div>
      
    </body>
</html>
