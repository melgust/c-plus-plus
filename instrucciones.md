# Mini guia para la tarea

1. Este archivo es creado en otra rama (mcali), el comando que se utiliza es

	git checkout -b mcali

Donde mcali es la rama que desean crear

2. Para agregar todos los archivos en la carpeta se hace con el siguiente comando

	git add .

2.1 Si lo que desean es agregar un solo archivo, entonces sustituir el punto por el nombre del archivo

	git add vacio.txt

3. para subir los archivo al repositorio hay que agregar un comentario primero, con el siguiente comando

	git commit -am "Agregar archivo de instruccion"

4. Luego 

	git push origin mcali

origin mcali, le dice a que rama debe subir esos cambios
