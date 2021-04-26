 

<%@page import="java.util.Random"%>
<%@page import="java.math.BigInteger"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body style="background-color: cornsilk">
        <h1>Keep Refreshing To Get A BigInteger each time...</h1>
        <h3> Max. Limit has been set to : 5000000000000. </h3>
        <%
      BigInteger maxLimit = new BigInteger("5000000000000");
      BigInteger minLimit = new BigInteger("25000000000");
      BigInteger bigInteger = maxLimit.subtract(minLimit);
      Random randNum = new Random();
      int len = maxLimit.bitLength();
      BigInteger res = new BigInteger(len, randNum);
      if (res.compareTo(minLimit) < 0)
         res = res.add(minLimit);
      if (res.compareTo(bigInteger) >= 0)
         res = res.mod(bigInteger).add(minLimit);
         
         
         out.println("Random Generated BigInteger: "+ res);
                 
        %>
    </body>
</html>
