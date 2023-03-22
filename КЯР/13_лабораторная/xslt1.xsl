<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Student</title></head>
<body>
<h2>Top-3 students of 2022</h2>
<table border="1">
<tr bgcolor='#c2f0ee'>
<th>Университет</th>
<th>Имя</th>
<th>Фамилия</th>
<th>Возраст</th></tr>
<xsl:for-each select="students/student">
<xsl:sort select="name" order="descending"/>
<tr>
    <td><xsl:value-of select="university"/></td>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="surname"/></td>
    <td><xsl:value-of select="age"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>