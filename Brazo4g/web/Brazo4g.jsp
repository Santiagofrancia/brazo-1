<%-- 
    Document   : Brazo4g
    Created on : 17-may-2018, 0:27:21
    Author     : Gerardo
--%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Crear usuarios</title>
        <link rel="stylesheet" type="text/css" href="estilos.css" media="screen" />
    </head>
    <body>
        <a href="menu.jsp" class="btnCerrar">
            X
        </a>
        
        <h1 class="titulo">Crear nuevo Usuario.</h1>
        
        <form action="SerialBrazo" name="form2" method="POST">
            <div class="elementos">
                <label style="display: block;">Dato1: </label>
                <input type="text" name="Dato1" placeholder="Inserte su nombre" value="">
            </div>
            
            <div class="elementos">
                <label class="block">Dato2: </label>
                <input type="text" name="Dato2" placeholder="Inserte su alias" value="">
            </div>
            
            <div class="elementos">
                <label class="block">Dato3: </label>
                <input type="text" name="Dato3" placeholder="Inserte su E-mail" value="">
            </div>
            
            <div class="elementos">
                <label class="block">Dato4: </label>
                <input type="text" name="Dato4" placeholder="Inserte su contraseña" value="">
            </div>
            
            <div class="elementos">
                <input type="submit" name="botonAceptar" value="Aceptar"/>
            </div>
        </form>
        
        <div class="elementos">${mensaje}</div>
    </body>
</html>
